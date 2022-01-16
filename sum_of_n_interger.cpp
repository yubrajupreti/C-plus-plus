#include<iostream>
using namespace std;

int product(int n )
{
	if(n==2)
	{
		return 2;
	}

	else if (n%2==0)
	{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      z       
		return (n*product(n-2));
	}	
	else
	{
		return (product(n-1));
	}
}

int main()
{
	int n,hello; 
	cout<<"enter the number of value";
	cin>>n;
	hello=product(n);
	cout<<"the product of the number is "<<hello;
	
}
