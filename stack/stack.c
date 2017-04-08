#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define MAXSIZE 1024

struct Stack {
  int maxsize;
  int top;
  char *items[MAXSIZE];
  int sizes[MAXSIZE];
};

struct Stack *Stack_create() {
  struct Stack *s = malloc(sizeof(struct Stack));
  assert(s != NULL);

  s->maxsize = MAXSIZE;
  s->top = 0;
  return s;
}

void Stack_push(struct Stack *s, char x[])
{
  assert(s->top != s->maxsize);
  s->items[s->top] = x;
  s->sizes[s->top] = strlen(x);
  s->top++;
}

char *Stack_pop(struct Stack *s)
{
  assert(s->top != 0);
  char *str = s->items[s->top];
  s->top--;
  return str;
}

void Stack_print(struct Stack *s)
{
  printf("stack is at this mem loc: %p\n", s);
  printf("maxsize: %d\n", s->maxsize);
  printf("top: %d\n", s->top);
  if (s->top == 0) {
    printf("Stack is empty.\n");
    return;
  }

  printf("items:\n");
  for (int i = 0; i < s->top; i++) {
    printf("item %d:\n", i);
    printf("len item: %d\n", s->sizes[i]);
    for (int j = 0; j < s->sizes[i]; j++) {
      printf("%c", s->items[i][j]);
    }
    printf("\n");
  }
}

int main(int argc, char *argv[])
{
  struct Stack *s = Stack_create();
  Stack_print(s);

  Stack_push(s, "420");
  Stack_push(s, "hello");
  Stack_push(s, "this is pretty cool.");
  Stack_pop(s);
  Stack_push(s, "this is pretty cool.");
  Stack_print(s);

  return 0;
}
