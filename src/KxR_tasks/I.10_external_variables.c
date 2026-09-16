#include <stdio.h>
#define   MAXLINE 1000 /*maximum length of input string*/

int max; /*maximum entered string*/
char line[MAXLINE] ;/*current string*/
char longest[MAXLINE];/*maximum length*/

int get2line(void);
void copy(void);

/*print maximum length string.sepcial ed.*/
int main ()
{
    int len;
    extern int max;
    extern char longest[];
    max = 0;
    while ((len = get2line())>0)
        if (len > max){
        max = len;
        copy();
        }
    if (max > 0)
    
        printf("%s",longest);
    return 0;
}
    
/*getline -spec. ver.*/
int get2line(void)
{
    int c,i;
    extern char line[];
    
    for (i=0; i < MAXLINE -1 && (c=getchar())!=EOF && c!='\n'; i++)
    line[i] = c;
    if (c=='\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/*copy - spec. ver.*/
void copy(void)
{
    int i;
    extern char line[], longest[];
    i=0;
    while ((longest[i]=line[i])!='\0')
    ++i;
    
}
    


    
