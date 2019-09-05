#include <stdio.h>
#include <stdlib.h>

struct node 
{
   int  value;
   struct node* next;
};

void print_list(struct node* head)
{
struct node* current = head;
while (current->next != NULL) {
          current = current->next;
          printf("%d ", current->value );
      }
}

void add(struct node** headRef, int num) 
{
   struct node* current = *headRef;
   struct node* newNode;
   newNode = malloc(sizeof(struct node));
   newNode->value = num;
   newNode->next = NULL;
   if (current == NULL){
      *headRef = newNode;
  	}
   else {

      while (current->next != NULL) {
          current = current->next;
      }
      current->next = newNode;
   }
}

void Del(struct node ** head,int index)
{
    int i;
    struct node * current = *head;
    for(i=0;i<index-1;i++)
      current=current->next;
  	current->next = current->next->next;
}


int main()
{
	struct node* head = NULL;
	head   = malloc(sizeof(struct node));
	add(&head,5);
	add(&head,3);
	add(&head,6);
	Del(&head,1);
	Del(&head,0);
	print_list(head);
	return 0;                 
}
