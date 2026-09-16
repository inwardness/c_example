#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,p,q,nitems;
    printf("input a and b:");
    nitems = scanf("%d%d", &a, &b);
    if (nitems != 2 || b == 0)
    {
        printf("Error:input invaild? expected any a and b != 0");
        abort();   
        }
        
        p = a/b; q = a%b;
        printf("p = %d, q= %d\n",p,q);
}