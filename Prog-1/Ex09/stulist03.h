/* struct declaration */
typedef struct {
  int id;
  char surname[12];
  char givename[12];
  char class[3];
} Record;
/*
struct node {
  int key;
  struct node *next;
};
*/
//typedef struct node *NodePointer;
typedef struct node *NodePointer;
struct node {
  Record      data;
  NodePointer next;
};
/* prototype declaration */
NodePointer insert(Record);
NodePointer finditem(int);
void listprint(void);

NodePointer make_1node(Record, NodePointer);
NodePointer delete(int);

/* Global Variable head */
NodePointer head;


