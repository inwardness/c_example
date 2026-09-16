#include <stdio.h>
#include<math.h>
//Compiler version gcc  6.3.0

signed int main()
{
  signed  int num, sinV;
  printf("enter a number:");
  scanf("%f",&num);
  sinV=sin(num);
  printf("%f\n",sinV);
  return 0;
}