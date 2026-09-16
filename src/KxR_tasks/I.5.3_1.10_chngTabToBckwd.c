#include <stdio.h>
//#include <conio.h>
 
int main() {
    int k;
    printf("entered a strings:\n");
    printf("for exit press: Ctrl+D\n");
    while((k=getchar()) != EOF) {
        if(k == 8) {
            putchar('\\'); putchar('b');
        } else if(k == 9) {
            putchar('\\'); putchar('t');
        } else if(k == 8) {
            putchar('\\'); putchar('b');
        } else if(k == '\\') {
            putchar('\\'); putchar('\\');
        } else
            putchar(k);
    }
    return 0;
}