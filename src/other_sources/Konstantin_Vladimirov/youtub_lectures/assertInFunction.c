#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void read_input(int*,int*);

int main(){
        int a,b,p,q;
        read_input(&a,&b);
        assert(b!=0);
        p = a/b;
        q = a%b;
        printf("p:%d,q:%d\n",p,q);
}

void read_input(int *pa,int *pb){
    int nitems;
    printf("inout a and b:");
    nitems = scanf("%d%d",pa,pb);

        if ((nitems!=2)||(*pb == 0))
        {
            printf("Wrong input!\n");
            abort();
        }
    }
    
  //  Проверка работает только в отладочной сборке, при подаче -DNDEBUG все
//assertions исчезают из кода.