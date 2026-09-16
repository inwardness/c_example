#include <stdio.h>
#define TABSPACE 3
#define MAXINLINE 20
char line[MAXINLINE];

int getstring(int line[],int lim);
void clstring(int line[],int lim);

int de1tab(int line[],int lim);
int main()
{
    extern char line[];
    extern int getstring();
    extern int de1tab();
    int length = 0;
    while ((length=(getstring(line,MAXINLINE)))>0)
    {
        de1tab(line,MAXINLINE);
        printf("%s",line);
    }
return 0;
}

int getstring(int line[],int lim)
{
    int i;
    char c;
    for ( i = 0; i < lim - 1 && ((c=getchar())!=0) && (c!='\n'); i++)
    {
        line[i] = c;
        if (line[i] == '\n')
        {
            line[i] = c;
            ++i;
        }
        line[i] = '\0';
    }

    return i;    
}

void clstring(int line[],int lim)
{
    int i;
    for ( i = 0; i < lim; i++)
    {
        line[i] = '\0';
    }
    
}

int de1tab(int line[],int length)
{
    int i;
    char end = '\0';
    extern TABSPACE;
    int tab = TABSPACE;      
    {
        for ( i = 0; i < length; i++)
        {
            if (line[i] == '\t')
            {
                while (tab > 0)
                {
                    putchar('_');
                }
                tab = TABSPACE;
            }
            else
                    printf("%c",line[i]);
        }
        
    }
    
}