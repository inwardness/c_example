 #include<stdio.h>
 #include<stdbool.h>
 int main()
    {
       /*  int a = 10;
        int b = 4;
        int c = a == b;                 // 0 - числа НЕ равны
        printf("c = %d \n", c);         // c = 0
     
        int num = 5;
        int result = num == 2 + 3;      // 1 - числа равны
        printf("result = %d \n", result);     // result = 1
 */
       /*  int c = 10 != 4;    // 1
        int d = 4 != 4;     // 0
        printf("%d\n",c);
        printf("%d",d); */

       /*  int a = 10;
        int b = 4;
        int c = a > b;   // 1
        printf("%d",c);
 */
       /*  int c = !2; // 0
        int d = !0; // 1
        printf("%d",c); */

       /*  int c = -2 && 5;    // 1
        int d = 0 && 7;     // 0
        printf("%d",c); */

        /* int c = -2 || 5;    // 1
        int d = 0 || 7;     // 1
        int e = 0 || 0;     // 0
        printf("%d",c); */

        int a = -2 > 5;          // 0
        int b = 0 < 7;           // 1
        int c = 0 == 0;          // 1
        int d = a && b || c;        // 1
 
        printf("a = %d \n", a);
        printf("b = %d \n", b);
        printf("c = %d \n", c);
        printf("d = %d \n", d);
        return 0;
    }