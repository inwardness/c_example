#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 256

typedef struct {
    char utc_time[64];  // Формат: "2025/07/23,20:11:17"
    float temperature;  // Значение температуры
} TemperatureData;

// Извлекает значение из строк вида `Key = "Value"` или `Key = Value`
int extract_value(const char *line, char *value, size_t max_len) {
    const char *start = strchr(line, '=');
    if (!start) return 0;
    
    start++; // Пропускаем '='
    // Пропускаем пробелы после '='
    while (*start == ' ' || *start == '\t') start++;
    
    // Если значение в кавычках (для времени)
    if (*start == '"') {
        start++;
        const char *end = strchr(start, '"');
        if (!end) return 0;
        size_t len = end - start;
        if (len >= max_len) len = max_len - 1;
        strncpy(value, start, len);
        value[len] = '\0';
    } 
    // Если значение без кавычек (для температуры)
    else {
        char *end;
        strncpy(value, start, max_len);
        value[max_len - 1] = '\0';
        // Удаляем лишние пробелы и переводы строк
        end = value + strlen(value) - 1;
        while (end >= value && (*end == ' ' || *end == '\n' || *end == '\r')) end--;
        *(end + 1) = '\0';
    }
    return 1;
}

int main() {
    FILE *input = fopen("DIGISOLO.LOG", "r");
    if (!input) {
        perror("Ошибка открытия log.txt");
        return 1;
    }

    FILE *output = fopen("output.csv", "w");
    if (!output) {
        perror("Ошибка создания output.csv");
        fclose(input);
        return 1;
    }

    // Заголовок CSV
    fprintf(output, "UTC Time,Temperature\n");

    char line[MAX_LINE_LENGTH];
    TemperatureData current;

    while (fgets(line, sizeof(line), input)) {
        // Ищем UTC Time
        if (strstr(line, "UTC Time") != NULL) {
            if (!extract_value(line, current.utc_time, sizeof(current.utc_time))) {
                continue; // Пропускаем битые строки
            }
            
            // Читаем следующую строку (Temperature)
            if (fgets(line, sizeof(line), input)) {
                if (strstr(line, "Temperature") != NULL) {
                    char temp_str[32];
                    if (extract_value(line, temp_str, sizeof(temp_str))) {
                        current.temperature = atof(temp_str);
                        // Записываем в CSV
                        fprintf(output, "%s,%.4f\n", current.utc_time, current.temperature);
                    }
                }
            }
        }
    }

    fclose(input);
    fclose(output);
    printf("Данные сохранены в output.csv\n");
    return 0;
}