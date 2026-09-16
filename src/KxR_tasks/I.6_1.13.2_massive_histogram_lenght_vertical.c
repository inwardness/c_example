#include <stdio.h>
#define N 30
int main()
{
  int length, neww, i; /*length -counter of symbol in word, neww - counter new word,i-index array*/
  char c;              /*c-input charcter*/
  int w[N];            /*w[N]-massive */
  int big;           /*size of biggest word*/ 
  length = neww = 0;      /*inicialization of variables*/
  for (i = 0; i < N; ++i) /*inicialization massive to zero*/
    w[i] = 0;
  while ((c = getchar()) != EOF)
  { // array filling
    if (c != ' ' && c != '\n')
    {
      ++length; // starts counter to word length by condition
    }
    else if (length > 0)
    {
      ++neww;                 // starts counter word position and stop counter length
      for (i = 0; i < N; ++i) // inicialized array to write length word
        if (w[i] == 0)
        {                // writing in first element by the value zero
          w[i] = length; // take  value to element of massive
          length = 0;
        } // drop counter
    }
  }

  while (big > 0) // big - слово с максимальным колличеством букв - соответствует высоте столбца.
    {               //значения в массиве соответствуют поочерёдно введённым длинам слов
    for (i = 0; i < N; ++i) // цикл while используется для формирования строк -посредством уменьшения счётчика big и перехода на новую строку
      if (w[i] >= big)  //цикл for формирует для длины слова -соответствующего порядковой позиции массива 
        putchar('|');   //устанаваливая знак | для ячейки массива в строке начиная с того момента когда соблюдено условие w[i] >= big
      else              //и до окончания цикла while,поскольку значения в массиве с каждой итеррацией всегда больше исходного
        putchar(' ');

    putchar('\n');
    --big;
  }
  printf("\n");
  return 0;
}
