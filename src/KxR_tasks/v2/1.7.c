#include <stdio.h>
/*output EOF*/
int main()
{
    int c;
        while ((c=getchar())!=EOF)

            printf("%c",c);
        printf("%d",c);
        return 0;
}
