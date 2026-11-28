#include <stdio.h>

#define IN  1 //inword
#define OUT  0 //outword

int main(void){
    int c,state;
    state = OUT;

        while ((c=getchar())!=EOF){
            if (c == ' ' || c == '\t' || c == '\n'){
                state = OUT;
                putchar('\n');
            }
            else if ((state = IN)){
                putchar(c);
            }
        }
return 0;
}
