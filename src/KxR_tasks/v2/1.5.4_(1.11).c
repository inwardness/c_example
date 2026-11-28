#include <stdio.h>

#define IN 1 /*in word*/
#define OUT 0 /*out word*/

/*count symbols,words,strings*/
int main(void){
    int c,nl,nw,nc,state;
    state = OUT;
    nl=nw=nc=0;
    while ((c=getchar())!=EOF){
            ++nc;
        if (c=='\n')        {++nl;}
        if (c==' '||c=='\n'||c=='\t')        {state = OUT;}
            else if(state == OUT)            {state = IN;++nw;}
    }
    printf("nl:%d,nw:%d,nc:%d\n",nl,nw,nc);
return 0;
}
//for exersize 1.11(1.5.4) testfile.txt contain \b -symbol. he is invisible for output but count for program
//special sybols doesn't see in output and it's count
