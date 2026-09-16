#include<stdio.h>

int main(){
    char c;
    int spaces = 0;
   // c = getchar();
    while (c != EOF)
    {
        c = getchar();
        if (c == ' ' || c == '\t')
        {
            ++spaces;
            if (c == '\t')
            {
              c = ' ';
            }
            if (c == ' ')
            {
                if (spaces == 1)
                {
                    putchar(c);
                }
                else if (spaces > 1)
                {
                    putchar('\b');
                    //--spaces;
                }
                
            }
        
        }
        else
        {
         spaces = 0;
         putchar(c);
        }
    }
    
}