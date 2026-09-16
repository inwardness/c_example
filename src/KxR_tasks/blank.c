/* #include<stdio.h>
int main(void)
{
    int x=5;
    int y=7;
     
    int z = x > y ? x-y : x+y;
     
    printf("z = %d", z);        // z = 3
    return 0;
} */
#include <stdio.h>
int main(void)
{
    for (int i = 0; i < 9; i++)
    {
        printf("%d * %d = %d \n", i, i,  i * i);
    }
    return 0;
}