#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdbool.h>
//решето Эратосфена

int main()
{
    int n,p;
    int *mass;
    _Bool flag; // "зачёркивали" ли число для данного p
    printf("Input n: ");
    scanf("%d",&n);
    if(n>=2)
    {
     n = n - 1;
     mass = (int *)malloc(n* sizeof(int));
     for(int i = 0; i < n; i++)
     {
        mass[i] =  i + 2;
     }
        for(int i = 0; i < n; i++)
        {
            p = mass[i];
            flag = false;
                for (int j = i + 1; j < n; j++)
                {
                    if(!(mass[j])%p)
                    {
                        for (int k = j; k < n -1 ; k++)
                        {
                         mass[k] = mass[k + 1];
                         flag = true;
                         n--;
                         j--;
                        }
                    }
                    if(flag == false) break;
                }
                 for (int i = 0; i < n; i++)
                 printf("%d",mass[i]);
                 free(mass);
        }
        else
        {
            printf("Error.n must be >= 2\n");
        }
        _getch();
        return 0;
    }
}


    
