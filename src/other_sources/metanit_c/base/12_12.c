#include<stdio.h>
int main(void)
{
   /*  int numbers[4];
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
     
    printf("numbers[0] = %d \n", numbers[0]);   // 1 - первый элемент
    printf("numbers[2] = %d \n", numbers[2]);   // 3 - третий элемент */
    /* 
    int numbers[4] = { 1, 2, 3, 5 };        // инициализация массива
    printf("numbers[2] = %d", numbers[2]);  // 3
     */

    /*  int numbers[] = { 1, 2, 3, 5 }; */

    /* int numbers[5] = { 10, 12}; // 10, 12, 0, 0, 0 */

    /* int numbers[5] = { [1]=11, [3] = 13 }; */

    /*  int numbers[5] = { 0, 11, 0, 13, 0 }; */

   /*  int numbers[] = { 5, 6, 7};
    size_t size = sizeof(numbers);
    printf("numbers size: %zu \n", size);     // numbers size: 12
    */
    /* int numbers[] = { 5, 6, 7};
    size_t size = sizeof(numbers);
    size_t count = sizeof(numbers) / sizeof(int);
    printf("numbers size: %zu \n", size);       // numbers size: 12
    printf("numbers count: %zu \n", count);         // numbers count: 3 */

    /* int numbers[] = { 5, 6, 7};
    size_t size = sizeof(numbers);
    size_t count = sizeof(numbers) / sizeof(numbers[0]);
    printf("numbers size: %zu \n", size);       // numbers size: 12
    printf("numbers count: %zu \n", count);         // numbers count: 3 */

   /*   int numbers[] = { 10, 12, 13, 54, 43 };
    size_t count = sizeof(numbers) / sizeof(numbers[0]);
    for(size_t i =0; i < count; i++)
    {
        printf("numbers[%zu] = %d \n", i, numbers[i]);
    } */

    /* int numbers[] = { 10, 12, 13, 54, 43 };
    size_t count = sizeof(numbers) / sizeof(numbers[0]);
    // int в качестве индекса
    for(int i =0; i < count; i++)
    {
        printf("numbers[%d] = %d \n", i, numbers[i]);
    } */

    /* int maxSize = 3;
    int array[maxSize];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    for (int i = 0; i < maxSize; i++)
    {
        printf("%d", array[i]);
    }
    */
    /*  int numbers[3] = {11, 12, 13};
    numbers[1] = 22;        // изменяем второй элемент
    printf("numbers[1] = %d", numbers[1]);  // numbers[1] = 22
     */

    /* const int numbers[3] = {11, 12, 13};
    // numbers[1] = 22; // Нельзя изменить - массив константный
    printf("numbers[1] = %d", numbers[1]);  // numbers[1] = 22
    */

    /* int numbers[3][2] = { {1, 2}, {4, 5}, {7, 8} };
    printf("numbers[1][0] = %d \n", numbers[1][0]);     // 4
     */

    /* int numbers[3][2] = { {1, 2}, {4, 5}, {7, 8} };
    // проходим по 3 строкам таблицы
    for(int i =0; i < 3; i++)
    {
        // проходим по 2 столбцам каждой строки
        for(int j =0; j<2; j++)
        {
            printf("numbers[%d][%d] = %d \n", i, j, numbers[i][j]);
        }
    } */

    /* int numbers[3][2] = { {1, 2}, {4, 5}, {7, 8} };
    size_t rows_count = sizeof(numbers) / sizeof(numbers[0]);           // 3
    size_t columns_count = sizeof(numbers[0]) / sizeof(numbers[0][0]);  // 2
    printf("rows count = %zu \n", rows_count);
    printf("columns count = %zu \n", columns_count);
    // проходим по 3 строкам таблицы
    for(size_t i =0; i < rows_count; i++)
    {
        // проходим по 2 столбцам каждой строки
        for(size_t j =0; j<columns_count; j++)
        {
            printf("numbers[%zu][%zu] = %d \n", i, j, numbers[i][j]);
        }
    } */

    /* char message[] = "Hello";
    printf("message: %s \n", message);     // message: Hello
    */

    /* char message[] = "Hello";
    size_t length = sizeof(message)/sizeof(char);   // 6 символов
    for(size_t i=0; i<length; i++)
    {
        printf("%d ", message[i]);
    } */

/*     
{
    const int r1 = 3, c1r2=2, c2=1;
    int matrix1[3][2] = {{1, 2},{3, 4},{5, 6}};
    int matrix2[2][1] = {{10},{20}};
    int matmult[r1][c2];
 
    // инициализируем результирующую матрицу
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            matmult[i][j]=0;
        }
    }
 
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1r2;k++)
            {
                matmult[i][j] = matmult[i][j] + matrix1[i][k] * matrix2[k][j];
            }
        }
    }
 
    printf("Result \n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",matmult[i][j]);
        }
        printf("\n");
    }
}
 */
    return 0;
}