struct node
{
  int id;
  char name[100];
  struct node *next;
};


typedef struct node NODE;
typedef NODE* NodePtr;
