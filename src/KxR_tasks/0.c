#include <stdio.h>
/* Exercise 1-18. Write a program to remove trailing blanks and tabs
 * from each line of input, and to delete entirely blank lines. */
#define MAX 70
int get_line(char line[]);
int main() {
  int len; /* current line length */
  char line[MAX];
  while ((len = get_line(line)) > -1)
    if (len != 0)
      printf("%s", line);
  return 0;
}

/* read a line into s, return length */
int get_line(char s[]) {
  int c, i = 0;
  char previous = 'A'; /* some default value */
  /* copy each character into the corresponding `s`'s slot */
  for (i; i<MAX && ((c = getchar()) != EOF) && (c != '\n'); ++i) {
    /* do not add repeating blanks and tabs */
    if ((previous == ' ' || previous == '\t') && (c == ' ' || c == '\t')) {
      --i;
    } else {
      s[i] = c;
      previous = c;
    }
  }
  /* remove trailing tabs and spaces */
  if (s[i - 1] == '\t' || s[i - 1] == ' ') {
    s[i - 1] = '\n';
    s[i] = '\0';
    return i;
  }
  /* File is exhausted */
  if (c == EOF)
    return -1;
  /* an empty line */
  else if (c == '\n' && i == 0)
    return i;
  else if (c == '\n') {
    s[i] = c;
  }
  /* finish the string - an array of characters in C */
  s[++i] = '\0';
  return i;
}