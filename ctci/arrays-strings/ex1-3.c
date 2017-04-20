// URLify: Write a method to replace all spaces
// in a string with '%20'. You may assume that the
// string has sufficient space at the end to hold
// the additional characters, and that you are given
// the "true" length of the string.
// Example:
// Input: "Mr John Smith    ", 13
// Output: "Mr%20John%20Smith"

#include "dbg.h"
#include <stdio.h>

char *urlify(char *s, int length) {
  char *str;
  int i = 0;
  while(*s != '\0' && i <= length - 1) {
    if (*s == ' ') {
      str[i] = *s;
    } else {
      str[i] = *s;
    }

    s++;
    i++;
  }
  return &str;
}

void print_str(char *s) {
  while(*s != '\0') {
    printf("%c", *s);
  }
}

int main(int argc, char *argv[]) {
  char *str = urlify("Mr John Smith     ", 13);
  print_str(str);

  return 0;
}
