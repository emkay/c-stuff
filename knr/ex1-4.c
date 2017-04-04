#include <stdio.h>

int cToF(int c)
{
  return c * (9.0 / 5.0) + 32;
}

int main(int argc, char *argv[])
{
  int f = 0;
  int start = 0;
  int end = 200;
  int step = 20;
  int c = start;

  for (c = start; c <= end; c += step) {
    f = cToF(c);
    printf("%6d %6d\n", f, c);
  }
  return 0;
}
