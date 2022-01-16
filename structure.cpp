#include<iostream>
using namespace std;

struct person
{
	string name;
	int id;
	string address;
}p1;
int main()
{
	p1.name="hari";
	p1.id=134;
	p1.address="sukedhara-4";
	cout<<"the name of the person is "<<p1.name<<"\n";
	cout<<"the id of the student is "<<p1.id<<"\n";
	cout<<"the address of the person is "<<p1.address  <<"\n";
	
}
