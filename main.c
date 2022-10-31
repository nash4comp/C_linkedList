#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void printList(struct Node* n) {
  while(n != NULL){
    printf(" %d ", n->data);
    n = n->next;
  }
}

void printReverseList(struct Node* n) {
  while(n != NULL){
    printf(" %d ", n->data);
    n = n->prev;
  }
}

int main() {
  struct Node* head = NULL;
  struct Node* second = NULL;
  struct Node* third = NULL;

  head = (struct Node*) malloc(sizeof(struct Node));
  second = (struct Node*) malloc(sizeof(struct Node));
  third = (struct Node*) malloc(sizeof(struct Node));

  head->data = 1;
  head->next = second;
  head->prev = NULL;

  second->data = 2;
  second->next = third;
  second->prev = head;

  third->data = 3;
  third->next = NULL;
  third->prev = second;

  printList(head);
  printf("\n");
  printReverseList(third);

  return 0;
}
