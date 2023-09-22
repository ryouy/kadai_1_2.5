#include <stdio.h>
#include <stdlib.h>
#include "stulist01.h"

int main()
{
  int i,num;

  Record head_record;
  head_record.id = -1;

  head = make_1node(head_record, NULL);

  Record data;
printf("Insert new data: (class ID name) ->");

  while (scanf("%s %d %s %s", &data.class,&data.id,&data.surname,&data.givenname) == 4) {
    //if (insert(num) == NULL) printf("Data %d is already on the list\n", num);
    //printf("Insert new data: (class ID name) ->");

    if (insert(data) == NULL) printf("ID %d is already on the list!\n", data.id);
    printf("Head\n");
    listprint();
    printf("Insert new data: (class ID name) ->");
  }
    printf("Bad\n");

  return 0;
}

// NodePointer insert(struct Record data)
NodePointer insert(Record data) {
  NodePointer newnode;

  if (finditem(data.id) == NULL) {
    newnode = make_1node(data, head->next);
    head->next = newnode;

    return newnode;
  }
  else return NULL;
}

void listprint(void)
{
  NodePointer n;

  for (n = head->next; n != NULL; n = n->next) {
    printf("%-12s %d %-12s %-12s", n->data.class,n->data.id,n->data.surname,n->data.givenname);
    printf("\n");
  }
}

NodePointer finditem(int id)
{
  NodePointer n;

  for (n = head; n->next != NULL; n = n->next) {
    if (n->next->data.id == id) return n;
  }

  return NULL;
}

NodePointer make_1node(Record data, NodePointer p)
{
  NodePointer n;

  if ((n = (NodePointer)malloc(sizeof(struct node))) == NULL) {
    printf("Error in memory allocation\n");
    exit(8);
  }

  //n->key = Record.key?;
  n->data = data;
  n->next = p;

  return n;
}

