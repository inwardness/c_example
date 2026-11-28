#include <stdio.h>

//count symbols, symbols dividers and so on

int main(void)
{
    int c,i,nwhite,nother;
    int ndigit[10];
    nwhite=nother=0;
        for (int i = 0; i < 10; i++)
            ndigit[i]=0;
    while ((c=getchar())!= EOF)
    {
        if (c>='0'&&c<='9')
            ++ndigit[c-'0'];
            else if (c== ' ' || c== '\n' || c== '\t')
                ++nwhite;
                    else
                        ++nother;
        printf("numbers=");
            for ( i = 0; i < 10; i++)
                printf("%d",ndigit[i]);
            printf(", symbol devider = %d, other=%d\n",nwhite,nother);
    }
return 0;

}
