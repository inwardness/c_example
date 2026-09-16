#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
  float l, f, lFA, dcha, dpa, dda;
  float v =  299 792 458.000;
  // inchecs
  float l8 = 3.2;
  float l4 = 6.4;  
  float l3-8 = 9.5;
  float l2 =12.7;
  float l5-8 = 15.9;
  float l3-4 = 19.0;
  float l7-8 = 22.2;
  // char *setlocale(LC_ALL, "ru_RU");
  printf("l-длинна волны, v-скорость распространения э.м. волны, t -период колебаний\n");
  printf("l-[m];v-[m/s]=%f;f-[Mhz]\n", v);
  printf("Длинна волны:l= v/f\n");
  printf("Введите частоту для расчёта длины вибратора[f-Mhz][xx.xx]:\n ");
  while (f != EOF)
  {
    scanf("%f", &f);
    f = f * (pow(10, 6));
    l = v / f;
    printf("Frenqucy:f = %f[Hz]\n", f);
    printf("Speed of ligth:v = %f[km/s]\n", v);
    printf("Length of wave:l = %3.6f[m]\n", l);
    lFA = l +(l* l8);
    printf("длинна [m]:5/8-l = %f\n", lFA);
    dpa = l + (l* l2);
    printf("Длинна полуволновой антенны в свободном пространстве [m]:1/2-l = %3.2f\n", dpa);
    dcha = l + (l* l4);
    printf("Четверть длины волны [m]:1/4-l = %3.2f\n", dcha);
    dda = (l + (l* l5-8));
    printf("Пять-восьмых длины антенны [m]:5/8-l = %3.2f\n", dda);
    printf("\n");
  }
  return (0);
}