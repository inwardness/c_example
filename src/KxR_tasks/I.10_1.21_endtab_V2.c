#include <stdio.h>
#define TAB 8

int main() {
    int c;
    int position = 0;    /* Текущая позиция на экране */
    int space_count = 0; /* Накопленные пробелы */

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            space_count++;
            position++;
            /* Если накопилось столько пробелов, что мы достигли границы таба */
            if (position % TAB == 0) {
                putchar('\t');     /* Схлопываем их в один таб! */
                space_count = 0;   /* Сбрасываем счетчик накопленных пробелов */
            }
        } else {
            /* Перед тем как напечатать обычный символ,
               выплескиваем оставшиеся пробелы, которые не смогли стать табом */
            while (space_count > 0) {
                putchar('_'); /* Выводим их как подчеркивания */
                space_count--;
            }

            putchar(c);
            position++;

            if (c == '\n') {
                position = 0;
            }
        }
    }
    return 0;
}
