#include<stdio.h>
#include<stdlib.h>

#if 0
int gcd(int x,int y){
    int q;
    assert(y!=0);
    q = x % y;
    if(q == 0)
        return y;
    return gcd(y,q);
}
#endif

int iabs(int x){return (x < 0)? -x; x;}
int eu_mod(int x, int y){
    int r;
    assert(y!=0);
    r = x % y;
    if (r < 0)
        r += iabs(y);
    return r;
}

int gcd(int x, int y){
    //x,y

    //tmp = x, x = y, y = x % y
    while (y!=0)
    {
        int tmp = x;
        x = y;
        y = tmp % y;
    }
    
}