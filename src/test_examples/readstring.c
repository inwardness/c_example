#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#define RECORD_SIZE 512
#define NUM_RECORDS 10 // Задайте количество записей для чтения

// Определение структуры Record
struct Record {
    uint8_t t0;
    uint8_t t1;
    uint8_t t2;
    uint8_t t3;
    uint8_t t4;
    uint8_t t5;
    int16_t dtb;
    uint16_t uht;
    uint16_t ctb;
    uint32_t spid;
    uint8_t samples[202];
    char strings[256];
    uint8_t mode;
    uint8_t compatibility;
    uint8_t protocol;
    uint8_t TB_polarity;
    uint8_t FO_polarity;
    uint8_t last_ready;
    uint16_t tone_duration;
    uint16_t TB_delay;
    uint16_t radio_delay;
    uint8_t radio_ampl;
    uint8_t shot_by_PPS;
    uint8_t ccf_max;
    uint8_t imp_mode;
    uint8_t interval;
    uint8_t leapS;
    uint8_t test;
    uint8_t file_version;
    char empty[2];
    uint32_t Tus;
    uint16_t count;
    char empty1[2];
    uint32_t serial_number;
    char empty2[3];
    uint8_t fdtb;
};

int main() {
    FILE *inputFile, *outputFile;
    struct Record record;
    size_t bytesRead;

    // Открываем входной файл для чтения
    inputFile = fopen("00000008.ucr", "rb");
    if (inputFile == NULL) {
        perror("Ошибка открытия входного файла");
        return EXIT_FAILURE;
    }

    // Открываем выходной файл для записи
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Ошибка открытия выходного файла");
        fclose(inputFile);
        return EXIT_FAILURE;
    }

    // Читаем записи из входного файла и записываем в выходной файл
    while ((bytesRead = fread(&record, 1, sizeof(struct Record), inputFile)) == sizeof(struct Record)) {
        // Записываем данные в выходной файл
        fprintf(outputFile, "t0: %u, t1: %u, t2: %u, t3: %u, t4: %u, t5: %u, dtb: %d, uht: %u, ctb: %u, spid: %u\n",
                record.t0, record.t1, record.t2, record.t3, record.t4, record.t5, record.dtb, record.uht, record.ctb, record.spid);
        // Вы можете добавить больше полей для записи в выходной файл по мере необходимости
    }

    // Закрываем файлы
    fclose(inputFile);
    fclose(outputFile);

    printf("Чтение и запись завершены.\n");
    return EXIT_SUCCESS;
}
