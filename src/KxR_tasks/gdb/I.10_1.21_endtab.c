#define TAB 8
#define MAXLINE 1000
#include "stdio.h"

int get1line(char line[], int lim);
void endtab(char line[], int lim);
void clear(char line[], int lim);
char line[MAXLINE];

void clear(char line[], int lim)
{
    int i;
    for (i = 0; i < lim; i++)
    {
        line[i] = '\0';
    }
}
int get1line(char line[], int lim)
{
    char c;
    int i;
    for (i = 0; i < lim & ((c = getchar()) != EOF) & c != '\n'; i++)
        line[i] = c;
    if (line[i] == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void endtab(char line[], int lim)
{
    int i;
    int pos;
    int position = 0;
    int space_count = 0;
    int needForTabspcs = 0;
    for (i = 0; i < lim && line[i] != '\0'; i++)
    {
        if (line[i] == ' ')
        {
            space_count++;
            position++;
        }
        else
        {

            if (space_count > 0)
              {
                position = position - space_count;
                while (space_count > 0)
                {
                    
                    needForTabspcs = TAB - (position % TAB);
                    
                       if (needForTabspcs > 1 && needForTabspcs <= space_count)
                        {
                           putchar('\t');
                           position = position + needForTabspcs;
                           space_count = space_count - needForTabspcs;
                        }
                        else
                        {
                            while (space_count > 0)
                            {                           
                            putchar('_');
                            space_count--;
                            position++;
                            }
                        }
                        
                        
                }
            }
            printf("%c", line[i]);
        position++;
        }
    }
}

int main()
{
    int length = 0;
    extern int get1line(char line[], int lim);
    extern void endtab(char line[], int lim);

    printf("Enter a string:\n");
    while ((length = get1line(line, MAXLINE)) > 0)
    {
        endtab(line, MAXLINE);
        putchar('\n');
        clear(line, MAXLINE);
    }
}