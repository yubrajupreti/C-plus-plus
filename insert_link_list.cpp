#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;

void insert(int data,int pos)
{
	node*temp1=new(struct node);
	temp1->data=data;
	temp1->next=NULL;
	if(pos==1)
	{
		temp1->next=head;
		head=temp1;
		return;
	}
	node *temp2=head;
	for(int i=0;i<pos-2;i++)
	{
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
}
void display()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}

void delete_n(int n)
{
	int i;
	node *temp2;
	node *temp1=head;
	if(n==1)
	{
		head=temp1->next;
		delete temp1;
		return;
	}
	for (i=0;i<n-2;i++)
	{
		temp1=temp1->next;
		
	}
	temp2=temp1->next;
	temp1->next=temp2->next;
	delete temp2;
}

int main()
{
	int data , pos,choice,n;
	do
	{
		cout<<"Enter your choice.\n 1.Insert \n2.Display \n3.Delete \n4Exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"enter the data you want to store";
				cin>>data;
				cout<<"enter the positon u want to store";
				cin>>pos;
				insert(data,pos);
				break;
			
			case 2:
				display();
				break;
			
			case 3:
				cout<<"enter the position of the node you want to delete";
				cin>>n;
				delete_n(n);
				break;	
			
			default:
				cout<<"You entered bad choice .hahhahh";		
		}
	}
	while(choice!=4);
}
