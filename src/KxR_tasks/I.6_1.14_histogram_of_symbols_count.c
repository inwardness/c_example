#include <stdio.h>
#define N 30
int main()
{
 // int length, neww; /*length -counter of symbol in word, neww - counter new word,i-index array*/
  char c;              /*c-input charcter*/
  char symbol[N]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  int count_sym[N];
  int big = 0;        /*size of biggest word*/ 
  
 // length = neww = 0;      /*inicialization of variables*/
  
    for (int i = 0; i < N; ++i) /*inicialization massive to zero*/
    {count_sym[i] = 0;}
  while ((c = getchar()) != EOF)
  { // array filling
    if (c != ' ' && c != '\n')
    {
      for (int i = 0; i < N; i++)
      {
        if (symbol[i] == c)
        {
          for (int j = 0; j < N; j++)
          {
            if(j == i)
              ++count_sym[j];
          }
        }
          
      }
      
    } 
  }
  for (int i = 0; i < N; i++)
  {
    printf("%c ",symbol[i]);
    }
  printf("\n");
  for (int j = 0; j < N-4; j++)
  {
  printf("%d ",count_sym[j]);
    }
  putchar('\n');


for (int i = 0; i < N; i++)
{
  if (count_sym[i] > big)
  {
    big = count_sym[i];
  }
    
}/*
putchar('\n');
printf("%d",big);
*/

  while (big > 0) // big - слово с максимальным колличеством букв - соответствует высоте столбца.
    {               //значения в массиве соответствуют поочерёдно введённым длинам слов
    for (int i = 0; i < N; ++i) // цикл while используется для формирования строк -посредством уменьшения счётчика big и перехода на новую строку
      if (count_sym[i] >= big)  //цикл for формирует для длины слова -соответствующего порядковой позиции массива 
        printf("| ");   //устанаваливая знак | для ячейки массива в строке начиная с того момента когда соблюдено условие w[i] >= big
      else              //и до окончания цикла while,поскольку значения в массиве с каждой итеррацией всегда больше исходного
        printf("  ");

    putchar('\n');

   
    --big;
  }
  printf("\n");
  return 0;
}
