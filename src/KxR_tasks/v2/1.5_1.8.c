#include <stdio.h>

/*counting space,tabs,new string*/

    int main(void)
    {
        int space =0;
        int tab=0;
        int ns=0;
        int c=0;
        while ((c=getchar())!=EOF)
        {
            if (c == ' ')
                ++space;
            if (c == '\t')
                ++tab;
            if (c == '\n')
                ++ns;
        }
        printf("spaces:%d\ntabs:%d\nns:%d\n",space,tab,ns);
    return 0;
    }
