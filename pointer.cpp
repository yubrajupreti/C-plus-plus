#include<iostream>
using namespace std;



int main()
{
	int a[5];
	int *p;
	int i;	
	cout<<"enter the element to be stored";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
		p=&a[i];
		cout<<p;
		cout<<"\n"; 
	}
}
