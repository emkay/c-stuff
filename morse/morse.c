#include "dbg.h"
#include <stdio.h>
#include <string.h>

void print_morse(char c);

int main(int argc, char *argv[]) {
  int i = 0;
  int j = 0;

  for (i = 1; i <= argc - 1; i++) {
    for (j = 0; argv[i][j] != '\0'; j++) {
      check(argv[i][j], "argv[%d][%d] is not valid.", i, j);
      print_morse(argv[i][j]);
    }
  }

  printf("\n");
  return 0;

error:
  return 1;
}

void print_morse(char c) {
  char s[5];

  switch (c) {
    case 'a':
    case 'A':
      strcpy(s, ".-");
      break;
    case 'b':
    case 'B':
      strcpy(s, "-...");
      break;
    case 'c':
    case 'C':
      strcpy(s, "-.-.");
      break;
    case 'd':
    case 'D':
      strcpy(s, "-..");
      break;
    case 'e':
    case 'E':
      strcpy(s, ".");
      break;
    case 'f':
    case 'F':
      strcpy(s, "..-.");
      break;
    case 'g':
    case 'G':
      strcpy(s, "--.");
      break;
    case 'h':
    case 'H':
      strcpy(s, "....");
      break;
    case 'i':
    case 'I':
      strcpy(s, "..");
      break;
    case 'j':
    case 'J':
      strcpy(s, ".---");
      break;
    case 'k':
    case 'K':
      strcpy(s, "-.-");
      break;
    case 'l':
    case 'L':
      strcpy(s, ".-..");
      break;
    case 'm':
    case 'M':
      strcpy(s, "--");
      break;
    case 'n':
    case 'N':
      strcpy(s, "-.");
      break;
    case 'o':
    case 'O':
      strcpy(s, "---");
      break;
    case 'p':
    case 'P':
      strcpy(s, ".--.");
      break;
    case 'q':
    case 'Q':
      strcpy(s, "--.-");
      break;
    case 'r':
    case 'R':
      strcpy(s, ".-.");
      break;
    case 's':
    case 'S':
      strcpy(s, "...");
      break;
    case 't':
    case 'T':
      strcpy(s, "-");
      break;
    case 'u':
    case 'U':
      strcpy(s, "..-");
      break;
    case 'v':
    case 'V':
      strcpy(s, "...-");
      break;
    case 'w':
    case 'W':
      strcpy(s, ".--");
      break;
    case 'x':
    case 'X':
      strcpy(s, "-..-");
      break;
    case 'y':
    case 'Y':
      strcpy(s, "-.--");
      break;
    case 'z':
    case 'Z':
      strcpy(s, "--..");
      break;
  }

  printf("%s ", s);
}
