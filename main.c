#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "node.h"

int main(void) {

  int i, j, id=1;
  NODE *head, *temp;

  head = NULL;

  for(i = 0; id != 0; i++)
  {
    temp = (NodePtr)malloc(sizeof(NODE));
    printf("ID :: ");
    scanf("%d",&(*temp).id);


    if((*temp).id == 0) break;
    else
    {
      temp->id = (*temp).id;
      printf("Name :: ");
      scanf("%s", (*temp).name);
      for(j = 0; j < strlen((*temp).name); j++)
      {
        temp->name[j] = (*temp).name[j];
      }
      temp->next = head;
      head = temp;
    }
  }
  printf("\n");
  for(temp = head; temp != NULL; temp = temp->next){
    printf("ID:: %-7d   Name:: %s\n", temp->id, temp->name);
  }
  printf("\t----- NULL -----\n\n");

  while(head != NULL){
    temp = head;
    head = head->next;
    free(temp);
  }

  return 0;
}