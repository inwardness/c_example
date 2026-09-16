#include <stdio.h>
#define SYMINLINE 40
#define LIMIT 10

void printString(char line[], int lim);
void clearString(char line[], int lim);
int f1getline(char line[], int lim);
void revers(char line[], int lim);

int main()
{
    char line[SYMINLINE];
    int len = 0;
    clearString(line, SYMINLINE);

    while ((len = f1getline(line, SYMINLINE)) > 1)
    {
        if (len > LIMIT)
        {

            revers(line, SYMINLINE);

            printString(line, SYMINLINE);

            clearString(line, SYMINLINE);

            putchar('\n');
        }
        else
        {
            printf("string less then 10 chars\n");
        }
    }
    return 0;
}

int f1getline(char line[], int lim)
{
    char c;
    int i;
    for (i = 0; i < lim -1 && (c = getchar()) != '\n' && c != EOF; i++)
    
        line[i] = c;
        if (line[i] == '\n')
        {
            line[i] = c;
            ++i;
        }
    line[i] = '\0'; 
    return i;
}

void printString(char line[], int lim)
{
    int i;
    for ( i = 0; i < lim; i++)
    {
        printf("%c", line[i]);
    }
}

void clearString(char line[], int lim)
{
    int i;
    for (i = 0; i < lim; i++)

        line[i] = 0;
}

void revers(char line[], int lim)
{
    char exch;
    int i;
    for ( i = 0; i < lim / 2; i++)
    {
        exch = line[i];
        line[i] = line[lim - i - 1];
        line[lim - i - 1] = exch;
    }
}
