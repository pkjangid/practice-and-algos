#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * left;
	struct node * right;
};

struct node * createnode(int data){
	struct node * n;
	n = (struct node *) malloc(sizeof(struct node));
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
}

void preorder(struct node * root){
	if(root !=NULL){
		printf("%d\n",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

int main()
{
	
	struct node * p = createnode(7);
	struct node * p1 = createnode(5);
	struct node * p2 = createnode(9);
	struct node * p3 = createnode(3);
	struct node * p4 = createnode(6);

	p->left = p1;
	p->right = p2;
	p1->left = p3;
	p1->right = p4;
						

					// 	    7
					//     / \
					//    5   9
					//   / \
					//  3   6

	

	preorder(p);

	return 0;
}
