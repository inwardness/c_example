#include <stdio.h>
/*count  symbols*/

int main()
{
    //counting entering values 1st version
    long nc;
    nc = 0;
    while (getchar()!=EOF)
    {
        ++nc;
        printf("%ld\n",nc);

    }

}
