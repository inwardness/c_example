#include <stdio.h>
#define MAX 100
int fgetline(char length[], int max);
void copy(char from[], char to[]);
int main()
{
    char length[MAX];
    char minlength[MAX];
    char maxlength[MAX];
    int min = 0;
    int len = 0;
    int max=0;
    int i;
    max=fgetline (length,MAX);
    while ((len = fgetline(length, MAX)) > 0)
    {
        if (len > max)
            copy(minlength,length);
    }
    if (min > 0)
        printf("%s", maxlength);
    return 0;
}

int fgetline(char length[], int max)
{
    int i;
    char c;
    for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        if (c == '\n')
        {
            ++i;
            length[i] = c;
        }
    length[i] = '\0';
    return i;
}
void copy(char from[], char to[])
{
    char i;
    while ((from[i] = to[i]) != EOF)
        ++i;
}
    