#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
  int len = strlen(s);
  for (int i = len; i >= 0; i--) {
    printf("%c", s[i]);
  }
  printf("\n");
}

int main (int argc, char *argv[])
{
  reverse("hello");
}
