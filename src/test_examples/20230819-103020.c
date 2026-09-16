#include <stdio.h>
 
#define invischar 0 // непечатаемый символ
#define vischar 1   // печатаемый символ
#define maxwords 10 // количество слов ограничим десятью
 
int main(){
 
    int i, biggest = 0, num = 0, prevch = vischar; // индексы, счетчики, флажки
    int ch;        // текущий символ
    int nword[maxwords]; // массив с кол-вом эл-тов maxwords
 
    for(i = 0; i < maxwords; ++i) // инициализация массива
        nword[i] = 0;       
    i = 0;                 
 
    while((ch = getchar()) != '0' ){ // начало заполнения массива
        if(ch == '\t' || ch == ' ' || ch == '\n')
            prevch = invischar;
        else{
            if (nword[i] > 0 && prevch == invischar){ // пропустим первые непечатаемые
                ++i; // переход к следующему элементу
                ++num; // счетчик числа непустых элементов
            }
            prevch = vischar;
            ++nword[i];
            if(nword[i] > biggest)
                biggest = nword[i]; // наибольший элемент(ы) массива
        }
    } //конец заполнения массива
 
    printf("%s\n", "Words length histogramm");
    while(biggest > 0){
        for(i = 0; i <= num; ++i)
            if(nword[i] >= biggest)
                putchar('I');
            else
                putchar(' ');
        putchar('\n');
        --biggest;
    }
    return(0);
}