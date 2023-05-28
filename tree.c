#include<stdio.h>
#include<stdlib.h>

//declaring the nodes//
struct node {
	int data;
	struct node* left;
	struct node* right;
};

 // C function of PREORDER//
 void Preorder(struct node* root){
 	if(root==NULL) return;
 	printf("%d->",root->data);
 	Preorder(root->left);
 	Preorder(root->right);
 }
 
// C function of INORDER//
 void Inorder(struct node* root){
 	if(root==NULL) return;
 	Inorder(root->left);
 	printf("%d->",root->data);
 	Inorder(root->right);
 }
 
 
 // C function of POSTORDER//
 void Postorder(struct node* root){
 	if(root==NULL) return;
 	Postorder(root->left);
	Postorder(root->right);
 	printf("%d->",root->data);
 }
 
 // creation of new node//
 struct node* Create(value){
 	struct node* newNode=malloc(sizeof(struct node));
 	newNode->data=value;
 	newNode->left=NULL;
 	newNode->right=NULL;
 	return newNode;
 }
 
 // inserting to a left node//
 struct node* insertLeft(struct node* root,int value){
 	root->left=Create(value);
 	return root->left;
}

// insertin to a right node//
// inserting to a left node//
 struct node* insertRight(struct node* root,int value){
 	root->right=Create(value);
 	return root->right;
}

// calling  from main function//
	void main(){
	struct node *root=Create(1);
	insertLeft(root,2);
	insertRight(root,3);
	insertLeft(root->left,4);

	
	
	// Printing the after traversal result//
	printf("Preorder Traversal elements \n ");
	Preorder(root);
	printf("\n");
	printf("Inorder Traversal elements \n ");
	Inorder(root);
	printf("\n");
	printf("Postorder Traversal elements \n ");
	Postorder(root);
	
}
 	
