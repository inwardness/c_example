#include<stdio.h>
#include<stdlib.h> 
int main() {
   
   int *buffer;
   size_t bufsize = 32;
   size_t characters;

   buffer = (int *)malloc(bufsize * sizeof(int));
   if(buffer == NULL)
   {
      perror("Unable tp allocate buffer");
      exit(1);
   }

   printf("Type something:");
   characters = getline(&buffer,&bufsize,stdin);
   printf("%u characters were read.\n",characters);
   printf("You typed: '%s'\n",buffer);

   return(0);    
}
