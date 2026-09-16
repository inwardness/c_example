#include <stdio.h>

int main()
{
    int c;
    int spc = 0;
    printf("entered a string for delete more then one space:\n");
    printf("for exit press: Ctrl+D\n");
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && spc == 0)
        {
            ++spc;
        }
        else if (c == ' ' && spc > 0)
        {
            putchar('\b');
        }
        else
        {
            spc = 0;
        }
        putchar(c);
    }
}