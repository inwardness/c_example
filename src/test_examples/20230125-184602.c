#include<stdio.h>

main()
{
    float  fahr, celsius;
    int  lower, upper, step;

    lower=0;//low threshold on fahrenheit
    upper=300;//high threshold on farenheit
    step=20;//step mesurement

    printf("celcius fahrenheit\n");
    fahr=lower;
    while
    (fahr<=upper)

    {
        celsius=(5.0*(fahr-32))/9.0;

        printf("%7.2f\t %7.2f\n",celsius,fahr);
        fahr=fahr +step;
    }

}