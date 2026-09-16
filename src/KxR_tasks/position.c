#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{   
    int bytes_read;
    int size = 10;
    char *string;
    printf("Emter string:\n");
    string = (char *) malloc (size);
    bytes_read = GetString(&string, &size, stdin);
    if (bytes_read == -1)
    {
        puts("ERROR!");
    }
    else
    {
    puts("you entered the follow string: ");
    puts(string);
    puts("\nCurrent size for string block: %d", bytes_read);
    }
    return 0;

}
