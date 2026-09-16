// сonvert temperature in cycle for
#include <stdio.h>
/*program to calculate temperature fahrenheit to celsius*/
int main()
{
  int fahr;                                                   /*assign type of fahr value*/
  for (fahr = 300; fahr >= 0; fahr = fahr - 20)               /*cycle contain condition start range,end range,step range*/
  {                                                           /*start function while bosy condition does not done*/
    printf("%3.1d %3.2f\n", fahr, (5.0 * (fahr - 32)) / 9.0); /*function output values fahr:by the body cycle for[use step iteration],celsius as a formula*/
  }
}
