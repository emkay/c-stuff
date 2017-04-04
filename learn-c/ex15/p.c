#include <stdio.h>

int main(int argc, char *argv[])
{
  int ages[] = {
    34, 32, 5, 2
  };

  int *age = &ages[0];

  printf("age: %d", *age);
}
