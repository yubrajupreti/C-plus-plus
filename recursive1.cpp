#include<iostream>
using namespace std;

int recursive(int n )
{
	if (n==1)
	{
		return 1;
	}
	else
	{
		return n * recursive(n-1);
	}
}
int main()
{
	int n ,a;
	cout<<"enter the number";
	cin>>n;
	a=recursive(n);
	cout<<"the factorial of the number is"<<""<<a;
}
