#include <stdio.h>
#define MAXLINE 1000
int get1line(int line[], int lim);
int line[MAXLINE];
int main()
{
    int c, i;
    int len = 0;
    int count = 0;
    int tabedge = 0;
    extern int line[];
    extern int get1line();
    printf("entered a length string fot tabs right edge:\n");
    //  scanf("%d",&tabedge);
    while ((len = get1line(line, MAXLINE)) > -1)
    {
        printf("%s", line);
    }
    return 0;
}

int get1line(int line[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF; i++)
    {
        line[i] = c;

        if (c == '\n')
        {
            line[i] = c;
            ++i;
        }

        line[i] = '\0';
    }
    return i;
}