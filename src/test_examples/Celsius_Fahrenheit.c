#include<stdio.h>

main()
  {
    float fahr, celsius;
    float  lower, upper, step;
     
     lower=0;//low threshold on fahrenheit 
     upper=300;//high threshold on farenheit
     step=20;//step mesurement
     
     
       fahr=lower;
       while
       (fahr<=upper)
       {
       celsius=(5*(fahr-32))/9;
       printf("%0.3f,%.2f\n" ,celsius,fahr);
       fahr=fahr +step;
       }
     
  }