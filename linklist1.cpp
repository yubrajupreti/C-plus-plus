#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
int main()
{
	 
	struct node *first=NULL, *second=NULL, *third=NULL;
	
	first= new (struct node);
	second =new(struct node);
	third = new (struct node);
	head=first;
	
	first->data=10;
	first->next=second;
	second->data=20;
	second->next=third;
	third->data=30;
	third->next=NULL;
	
	while(head!=NULL)
	{
		cout<<head->data<<"\t"<<head->next;
		cout<<"->";
		head=head->next;
	}
	
}

void insert(int data,int pos)
{
	node*temp1=new(struct node);
	temp->data=data;
	temp->next=NULL;
	if(pos==1)
	{
		temp->next=head;l
		head=temp;
		return;
	}
	node *temp2=head;
	for(int i=0;i<pos-2;i++)
	{
		temp2=temp2->next;
	}
	temp->next=temp2->next;
	temp2->next=temp;
}























