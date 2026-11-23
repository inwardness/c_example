#include <stdio.h>

int main(void)
{
    int c;
    int cc=0;
    while ((c=getchar())!=EOF)
    {
     if (c==' '){cc++;}
     if (c!=' '){
                if (cc>0){
                        putchar(' ');
                        cc=0;
                        }
        putchar(c);
        }
    }
return 0;
}
