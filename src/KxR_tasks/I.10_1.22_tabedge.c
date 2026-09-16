#include <stdio.h>
#define MAXLINE 1000

int get1line(char line[], int lim);

int main()
{

    int len = 0;
    int i;
    char line[MAXLINE];

    while ((len = get1line(line, MAXLINE)) > 0)
    {
        printf("%d\n", len);
        printf("%s",line);
        
    }

    return 0;
}

int get1line(char line[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    
        
        line[i] = c;
        if (c == '\n')
        {
            line[i] = c;
            i++;
        }
        line[i] = '\0';
    

    return i;
}
