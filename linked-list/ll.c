#include "dbg.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
  int key;
  struct Node* next;
} Node;

typedef struct LinkedList {
  Node *head;
  int size;
} LinkedList;

LinkedList *LinkedList_create() {
  LinkedList *ll = malloc(sizeof(LinkedList));
  ll->head = NULL;
  ll->size = 0;

  return ll;
}

void LinkedList_insert_front(LinkedList *ll, int key) {
  debug("insert to front %d", key);
  debug("ll->head: %p", ll->head);
  Node *n = malloc(sizeof(Node));
  n->next = ll->head;
  n->key = key;
  ll->head = n;
  ll->size++;
}

void LinkedList_insert_back(LinkedList *ll, int key) {
  debug("insert_back: %d", key);
  if (ll->head == NULL) LinkedList_insert_front(ll, key);
  int i = 0;

  Node *n = ll->head;

  debug("ll->size: %d", ll->size);
  for (i = 0; i <= ll->size - 2; i++) {
    debug("start loop n: %p", n);
    debug("loopin' i: %d", i);
    n = n->next;
    debug("end loop n: %p", n);
  }

  Node *tail = malloc(sizeof(Node));
  tail->next = NULL;
  tail->key = key;
  n->next = tail;
}

int main(int argc, char *argv[]) {
  LinkedList *ll = LinkedList_create();
  LinkedList_insert_front(ll, 1);
  LinkedList_insert_front(ll, 5);
  LinkedList_insert_front(ll, 10);

  LinkedList_insert_back(ll, 99);

  debug("head key: %d", ll->head->key);
  debug("head next: %p", ll->head->next);
  debug("head next next key: %d", ll->head->next->next->key);
  debug("head next next next key: %d", ll->head->next->next->next->key);
  debug("LinkedList size: %d", ll->size);
}
