  #include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *left;
	struct node *right;
	
};
struct node *newNode(int data)
{
	struct node *node =new(struct node);
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return (node);
}
void printpostorder(struct node *node)
{
	if(node==NULL)
	
		return;
	printpostorder(node->left);
	printpostorder(node->right);
		`
	cout<<node->data<<"\t";
	
}

void printpreorder(struct node*node)
{
	if (node==NULL)

		return;
	cout<<node->data<<"\t";
	printpreorder(node->left);
	printpreorder(node->right);
		
	
}
void printinorder(struct node* node)
{
	if(node==NULL)
	{
		return;
		
		   
	}
	printinorder(node->left);	
	cout<<node->data<<"\t";
	printinorder(node->right);
}
int main()
{
	struct node *root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	cout<<"\npreorder traversal of binary tree is \n";
	printpreorder(root);
	cout<<"\nInorder traversal of binary tree is \n";
	printinorder(root);
	cout<<"\nPostorder traversal of binary tree is \n";
	printpostorder(root);
	return 0;
}







