#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node * next;
};

void linkchecker(struct node *ptr){

	while(ptr !=NULL){
		printf("Element:%d \n",ptr->data);
		ptr = ptr->next;
	}
}



struct node *insertatsmid(struct node * head, struct node * lastptr, int data, struct node * sndlastptr, int data1){

	struct node * ptr = (struct node *) malloc(sizeof(struct node));
	struct node * nptr = (struct node *) malloc(sizeof(struct node));

	   ptr->data = data1;

	   nptr->data = data;

    ptr->next = lastptr->next;
     lastptr->next = ptr;

    	nptr->next = sndlastptr->next;
   		sndlastptr->next = nptr;

	   // ptr->next = nptr->next;
	   // lastptr

 	      

    
    return head;
}
int main()
{
	struct node * head;
	struct node * secound;
	struct node * third;
	struct node * fourth;

	head = (struct node *) malloc(sizeof(struct node));
	secound = (struct node *) malloc(sizeof(struct node));
	third = (struct node *) malloc(sizeof(struct node));
	fourth = (struct node *) malloc(sizeof(struct node));

	head->data = 7;
	head->next = secound;

	secound->data = 5;
	secound->next = third;

	third->data = 56;
	third->next = fourth;

	fourth->data = 12;
	fourth->next = NULL;

	printf("before\n");
	linkchecker(head);

	head = insertatsmid(head, secound, 15, fourth, 96);

	printf("after\n");
	linkchecker(head);


	return 0;
}
