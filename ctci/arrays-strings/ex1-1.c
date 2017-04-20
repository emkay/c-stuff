// Is Unique
// Implement an algorithm to determine if a
// string has all unique characters.
// What if you cannot use additional data structures?

#include "dbg.h"
#define FALSE 0
#define TRUE 1
#define ERROR 2

int isUnique(char *s) {
  check(s != NULL, "argument cannot be NULL");
  int seen[256] = {0};

  while(*s != '\0') {
    int n = *s;
    if (seen[n]) {
      return FALSE;
    }
    seen[n] = 1;
    s++;
  }

  return TRUE;

error:
  return ERROR;
}

int main (int argc, char *argv[]) {
  debug("'this' is unique: %d", isUnique("this"));
  debug("'hello' is not unique: %d", isUnique("hello"));
  debug("'NULL' is ?: %d", isUnique(NULL));
  return 0;
}
