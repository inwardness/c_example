/* Write a program to print all input lines that are longer than 80 characters.*/

#include <stdio.h>
#define COLUMNS 5       // columns in two demensional array
#define SYMINLINE 40    // symbol in  string
#define LIMITSTRINGS 10 // minimum of definition length string to write

int f1getline(char line[], int lim);                         // function to get length cerrent length
void copy(char from[], char to[]);                           // function of copy string do two demension arrays
void fclearStrings(char StringsMassive[COLUMNS][SYMINLINE]);          // function in start of program for clear two demensional array
void fprint(char StringsMassive[COLUMNS][SYMINLINE]);        // function for print two demenstional array

int main()
{
    int len, i, j;                           // length of input string and elements of array
    int count = 0;                           // counter  not writen string
    char line[SYMINLINE];                    // input string 
    char StringsMassive[COLUMNS][SYMINLINE]; // two demnesional array for founded strings

    fclearStrings(StringsMassive);
    printf("this program print five lines longer then 10 chars.\n");
    printf("Enter a string:\n");

    while ((len = f1getline(line, SYMINLINE)) > 0) // cycle work while string not equal 0
    {
        if (len > LIMITSTRINGS)
        {
           printf("string with more then 10 char: %s",line);
            fclearStrings(line);
        }
        else
            printf("\r");
    
    }
    while ((len = f1getline(line, IMAXLINE)) > 0)
    {
        if (len > LIMIT)
        {
            for (i = 0; i < STM-1; ++i)
            {
                if (i == count)
                    for (j = 0; j < IMAXLINE-1; ++j)
                    {
                       StringsMassive[count][j] = line[j];
                    }
            }
            ++count;
        }
    }
    putchar('\n');
    printf("Strings with more then 10 symbols:\n");
    fprint(StringsMassive);
    putchar('\n');
    return 0;
}

int f1getline(char line[], int lim)
{
    int i;
    char c;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void fclearStrings(char StringsMassive[SYMINLINE])
{
    int i;
    for (int i = 0; i < SYMINLINE - 1; ++i)
    {
      
            StringsMassive[i] = 0;
        
    }
   
}

