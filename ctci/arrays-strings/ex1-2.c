// Check Permutation
// Given two strings, write a method to decide
// if one is a permutation of the other.

#include "dbg.h"
#define FALSE 0
#define TRUE 1
#define ERROR 2
#define MAX_SIZE 256

int isPermutation(char *s, char *s2) {
  check((s != NULL) || (s2 != NULL),
      "arguments cannot be NULL");

  int size = 0;
  int size2 = 0;

  int seen[MAX_SIZE] = {0};
  int seen2[MAX_SIZE] = {0};

  while (*s != '\0') {
    int i = *s;
    seen[i] += 1;
    size += sizeof(s);
    s++;
  }

  while (*s2 != '\0') {
    int j = *s2;
    seen2[j] += 1;
    size2 += sizeof(s2);
    s2++;
  }

  if (size != size2) {
    return FALSE;
  }

  for (int i = 0; i <= MAX_SIZE; i++) {
    if (seen[i] != seen2[i]) {
      return FALSE;
    }
  }

  return TRUE;

error:
  return ERROR;
}

int main(int argc, char *argv[]) {
  debug("a:elloh is not a permutation: %d",
      isPermutation("a", "elloh"));

  debug("hello:elloh is a permutation: %d",
      isPermutation("hello", "elloh"));

  debug("hello:noper is not a permutation: %d",
      isPermutation("hello", "noper"));

  debug("NULL:NULL is not allowed: %d",
      isPermutation(NULL, NULL));
  return 0;
}
