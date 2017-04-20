#include "dbg.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_NUM 9999999
#define SetBit(A,k) ( A[(k/32)] |= (1 << (k%32)) )
#define TestBit(A,k) ( A[(k/32)] & (1 << (k%32)) )

int bvec[MAX_NUM];

int main(int argc, char *argv[])
{
  char c = 0;
  char n[8];

  int full_number = 0;
  int i = 0;

  FILE *fp;
  FILE *w;

  fp = fopen("phonebook.txt", "r");
  w = fopen("sorted.txt", "w");

  check(fp, "Could not open file for reading.");
  check(w, "Could not open file for writing.");

  while ((c = getc(fp)) != EOF) {
    debug("%c", c);
    // new line means we have a whole number
    if (c == 10) {
      n[7] = '\0';
      full_number = atoi(n);
      debug("full number: %d", full_number);
      SetBit(bvec, full_number);
      i = 0;
      continue;
    }
    n[i] = c;
    i++;
  }

  for (int j = 0; j <= MAX_NUM; j++) {
    if (TestBit(bvec, j)) {
      fprintf(w, "%d\n", j);
    }
  }

  fclose(w);
  fclose(fp);

  return 0;

error:
  return 1;
}
