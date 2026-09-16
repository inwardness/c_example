<<<<<<< HEAD
// C program named mainreturn.c to demonstrate the working
// of command line arguement
#include <stdio.h>

// defining main with arguments
int main(int argc, char* argv[])
{
    printf("You have entered %d arguments:\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
=======
#include<stdio.h>

void double_enumerate(char c)
{
    if (c == 'a')
    {
        printf("a\n");
        return;
    }
    printf("%c",c);
    
    double_enumerate(c - 1);
    printf("%c",c);
    
}
int main()
{
    char c;
    printf("enter loe-case symbol:\n");
    scanf("%c",&c);
    double_enumerate(c);
>>>>>>> 28f9728 (n)
}