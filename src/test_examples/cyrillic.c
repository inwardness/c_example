// пример работы с юникодом в консоли.
 
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
 
// разворот строки без strlen() для unicode
wchar_t* task3(wchar_t* src)
{
  for (wchar_t *i = src, *j = src + wcslen(src) - 1; i < j; ++i, j--) 
    *i ^= *j, *j ^= *i, *i ^= *j;
  return src;
}
 
#define BUFSIZE 256
 
int main()
{
  _setmode(_fileno(stdout), _O_U16TEXT);
  _setmode(_fileno(stdin),  _O_U16TEXT);
  
  wchar_t A[BUFSIZE];
  wprintf(L"? Пожалуйста введите строку: "); 
  fgetws(A, BUFSIZE, stdin);
  A[wcslen(A) - 1] = 0; // гашение конечного \n
  wprintf(L"Вы ввели строку \x22%S\x22\n", A);
  wprintf(L"# В обратном порядке: \x22%S\x22\n", task3(A));
  
  //system("pause");
  return 0;
}