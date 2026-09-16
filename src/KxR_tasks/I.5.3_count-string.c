#include <stdio.h>
/*countib string input flow*/
int main()
{
    int c,nl;
    nl = 0;
    printf("enter a strings\n");
    printf("for exit press:Ctrl+D\n");
    while ((c = getchar())!=EOF)
    {
        if(c == '\n')
        {
               ++nl;
        }
    }
    printf("value of strings:%d\n",nl);
    
}