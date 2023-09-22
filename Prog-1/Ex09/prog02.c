#include <stdio.h>
#include <stdlib.h>
#include "stulist02.h"

int main()
{
  int i,num;
Record data;
  Record head_record;
  head_record.id = -1;
  
  FILE *fp;
  head = make_1node(data, NULL);
fp=fopen("/home/course/prog1/public_html/2022/ex/ex09/Student.dat","r");
while(fscanf(fp,"%s%d%s%s",data.class,&data.id,data.surname,data.givename)!=EOF)
{
    insert(data);
}
fclose(fp);
 listprint();
 while(1){
printf("Insert new data: (class ID name) ->");
 if(scanf("%s %d %s %s", &data.class,&data.id,&data.surname,&data.givename) == EOF) break;
 if (insert(data) == NULL) printf("ID %d is already on the list!\n", data.id);
    //printf("Head\n");
    listprint();
    //printf("Insert new data: (class ID name) ->");
 }
 
    //printf("Bad\n");
printf("\n");
  return 0;
}

// NodePointer insert(struct Record data)
NodePointer insert(Record keydata) {
  NodePointer newnode,i;

  if (finditem(keydata.id) == NULL) {
      for(i=head;;i=i->next){
          if(i->next==NULL){
     newnode = make_1node(keydata,NULL);
    i->next = newnode;
    return newnode;
      }
  }
}
  else return NULL;
}

void listprint(void)
{
  NodePointer n;
  int i=0;
  printf("Head \n");
  for (n = head->next; n != NULL; n = n->next) {
    printf("%-12s %d %-12s %-12s \n", n->data.class,n->data.id,n->data.surname,n->data.givename);
    i++;
  }
  printf("%d nodes exist in the list.\n\n",i);
}

NodePointer finditem(int keydata)
{
  NodePointer n;

  for (n = head; n->next != NULL; n = n->next) {
    if (n->next->data.id == keydata) return n;
  }

  return NULL;
}

NodePointer make_1node(Record keydata, NodePointer p)
{
  NodePointer n;

  if ((n = (NodePointer)malloc(sizeof(struct node))) == NULL) {
    printf("Error in memory allocation\n");
    exit(8);
  }

  //n->key = Record.key?;
  n->data = keydata;
  n->next = p;

  return n;
}



