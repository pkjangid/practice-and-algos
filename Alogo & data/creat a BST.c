#include<stdio.h>
#include <malloc.h>

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

int preordertraversal(struct node * root){

	if(root!=NULL){
		printf("%d\n",root->data );
		preordertraversal(root->left);
		preordertraversal(root->right);
	}
}

struct node* insert(struct node *root, int x){

    
    if(root==NULL) {
    	printf("here in null, setting value:- %d\n", x);
         root = createnode(x);
        return root;
    } else if(x>root->data){
      	printf("here in right\n");
    
        root->right = insert(root->right, x);
    } else { 
       	printf("here in left\n");
    
        root->left = insert(root->left,x);
    }

    return root;
}


int main()
{
	struct node * p = createnode(10);
	// struct node * p1 = createnode(8);
	// struct node * p2 = createnode(9);
	// struct node * p3 = createnode(6);
	// struct node * p4 = createnode(7);
	// struct node * p5 = createnode(7);

	// p->left = p1;
	// p->right = p2;
	// p1->left = p3;
	// p2->right = p4;
	// p1->right = p5;


				//  10
				// / \         10,8,6,9,7
				// 8  
			 //   /\  
			 //    9    
                  / \

	insert(p, 8);
	printf("-----------------\n");
	insert(p, 9);
	printf("-----------------\n");	
	insert(p, 6);
	printf("-----------------\n");
	insert(p, 7);
	printf("-----------------\n");
	preordertraversal(p);
	return 0;
}

