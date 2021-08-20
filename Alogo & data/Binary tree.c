#include <stdio.h>
#include <malloc.h>

struct node
{
	int data;
	struct node *left;
	struct node * right;
};

void printingdataright(struct node *ptr){

	while(ptr !=NULL){

		printf("element:%d\n",ptr->data);
		ptr = ptr->right;
	}
}

void printingdataleft(struct node *ptr){

	while(ptr !=NULL){

		printf("element:%d\n",ptr->data);
		ptr = ptr->left;
	}
}

int main()
{
	struct node * p;
	p = (struct node *) malloc(sizeof(struct node));
	p->data = 1;
	p->left = NULL;
	p->right = NULL; 

	struct node * p1;
	p1 = (struct node *) malloc(sizeof(struct node));
	p1->data = 4;
	p1->left = NULL;
	p1->right = NULL; 

	struct node * p2;
	p2 = (struct node *) malloc(sizeof(struct node));
	p2->data = 6;
	p2->left = NULL;
	p2->right = NULL; 

	struct node * p3;
	p3 = (struct node *) malloc(sizeof(struct node));
	p3->data = 2;
	p3->left = NULL;
	p3->right = NULL; 
	

	p->left = p1;
	p->right = p2;
	p1->right = p3;

	printingdataleft(p);
	printingdataright(p);	
	return 0;
}
