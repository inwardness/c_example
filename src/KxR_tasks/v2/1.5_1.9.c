#include <stdio.h>

int main(void)
{
    int c;
    int cc=0;
    while ((c=getchar())!=EOF)
    {
       if (c==' ')
          ++cc;
            if (cc==1)
            {
                putchar(c);
            }
                if (cc>1)
        cc=0;
    putchar(c);
    return 0;
    }

}
