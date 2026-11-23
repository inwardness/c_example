#include <stdio.h>
//change spec symbol \t,\b,\\ to symbols

int main(void){

    int c;
    int tab='\t';
    int back='\b';
    int slash='\\';

    while ((c=getchar())!=EOF){
                                if (c==tab){printf("\\t");}
                                if (c==back){printf("\\b");}
                                if (c==slash){printf("\\\\");}
                                    if (c!=tab)
                                        if (c!=back)
                                            if(c!=slash)
                                    putchar(c);
    }
return 0;
}
