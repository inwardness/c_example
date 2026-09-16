<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#include <stdio.h>

#define MAXLINE 1000 /*максимальный размер вводимой строки*/
#define MAX 20
int get1line(char line[], int lim);
void tabsentered(char line[], char tabsline[], int max, int lim) void copy(char to[], char from[]);

/*печать самой длиной строки*/
int main(int argc, char const *argv[])
{
    int len;               /*длина текущей строки*/
    int max;               /*длина максимально из просмотренных срок*/
    char line[MAXLINE];    /*текущая строка*/
    char longest[MAXLINE]; /*самая длиная строка*/
    char tabsline[MAXLINE];
    while ((len = get1line(line, MAXLINE)) > 0){
        if (len < MAX){
            copy(longest, line);
            printf("%s", longest);
        }
            else if (len > MAX){
             /*была ли хоть одна строка?*/
            tabsenterd(line, tabsline, MAX, MAXLINE);
        }

        printf("%s", line);
    }

    return 0;
}

/*getline:  читает строку в s, возвращает длину*/
int get1line(char line[], int lim){
    int i, c;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void tabsentered(char line[], char tabsline[], int max, int lim){
    int i, j;
    int count = 0;
    int spc = 0;
    for (i = 0; i < lim - 1; i++){
        for (j = 0; j < lim - 1; j++){
            ++count;
            if ()
            {
                /* code */
            }
            
        }
    }
}

/*copy: копирует из from в to; to достаточно большой*/
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
=======
#include<stdio.h>
=======
#include <stdio.h>
>>>>>>> 3571db4 (add)
#define MAX 20
#define MAXLINE 1000
=======
/* Написать программу, печатающую символы так, чтобы строки текста не выходили правее n-й позиции. Это означает, что каждая строка, длина которой превышает n, должна печататься с переносом на следующие строки. Место переноса следует «искать» после последнего символа, отличного от символа-разделителя, расположенного левее n-ой позиции. Позаботиться о том, чтобы программа вела себя разумно в случае очень длинных строк, а так же когда до n-ой позиции не встречается ни одного символа пробела или табуляции.
Сделать стандартными средствами С с использованием только библиотеки stdio.h
 */

#include <stdio.h>
#include <string.h>
#define MAX_LINE_LENGTH 1024
>>>>>>> 28f9728 (n)

void print_wrapped_text(const char *text, int n) {
    int length = strlen(text);
    int current_position = 0;
    int last_space_position = -1;
    int count = 0;
    int stepback = 0;
    int i = 0;

    for (int i = 0; i < length; i++) {
        current_position++;
        count++;
        if ((count < n) && (text[i] == ' ' || text[i] == '\t'))
        {
            printf("%c",text[i]);
            last_space_position = i;
        }
        
<<<<<<< HEAD
    }
    
<<<<<<< HEAD
>>>>>>> 3b5657f (	modified:   Kernighan_Ritchie_examples/2.c)
}
=======
    
=======
        else if ((count < n) && (text[i]!=' ' || text[i]!='\t'))
        {
         printf("%c",text[i]);   
        }
        else if (count == n)
        {
            if(text[i] == ' ' || text[i] == '\t'){
                putchar('\n');
                count = 0;
            }
            else if (text[i]!=' ' || text[i]!='\t')
            {
                stepback = current_position - last_space_position;
                while (stepback > 0)
                {
                    putchar('\b');
                    i--;
                    stepback--;
                    
                }
                putchar('\n');
                count = 0;
                stepback = 0;
                //last_space_position = 0;
                
            }
            
        }
        
        
    }       
>>>>>>> 28f9728 (n)
}

int main() {
    char text[MAX_LINE_LENGTH];
    int n;

    // Запрашиваем у пользователя длину строки
    printf("Введите максимальную длину строки (n): ");
    scanf("%d", &n);
    getchar(); // Чистим буфер после scanf

    // Запрашиваем текст
    printf("Введите текст (максимум %d символов):\n", MAX_LINE_LENGTH - 1);
    fgets(text, MAX_LINE_LENGTH, stdin);

    // Печатаем текст с переносами
    print_wrapped_text(text, n);

    return 0;
}
>>>>>>> 3571db4 (add)
