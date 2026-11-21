#include <stdio.h>
/*copy input to output*/
/*
int main()
{
    int c;
        c=getchar();
        while (c != EOF)
        {
            putchar(c);
            c=getchar();
        }
return 0;
}
*/
/*ver.2*/
#include <stdio.h>

int main()
{
    int c;
    while ((c=getchar()) != EOF)
    putchar(c);
    return 0;
}
