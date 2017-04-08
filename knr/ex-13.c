#include <stdio.h>

#define IN  1
#define OUT 0

void print_words(char *w[])
{
  int len = sizeof(*w);
  printf("length: %d\n", len);
  for (int i = 0; i <= len; i++) {
    if (*w[i])
      printf("%d\n", *w[i]);
  }
}

/* count word lengths */

int main (int argc, char *argv[])
{
  char c;
  char *w[] = {0};
  int i = 0;
  int nc = 0;
  int state = OUT;

  while ((c = getchar()) != EOF) {
    nc++;
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      printf("nc: %d", nc);
      w[i] = &c;
    }
    i++;
  }

  print_words(w);

  return 0;
}
