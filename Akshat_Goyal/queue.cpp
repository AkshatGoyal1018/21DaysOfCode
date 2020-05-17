#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
	int data;
	node *link;
};
node *first = NULL, *last = NULL; 
bool isempty()
{
	if(first== NULL && last == NULL)
		return true;
	else
		return false;
}
int insertion()
{
	int value;
	cin>>value;
	node *ptr = new node;
	ptr->data = value;
	if(isempty())
		last = ptr;	
	ptr->link = first;
	first = ptr;
	return 0;
}
int deletion()
{
	if(isempty())
	{
		cout<<"\nThere is nothing to delete. Try Again\n";return 0;
	}
	else
	{
		node *ptr;
		ptr = last;
		last = last->link;
		delete ptr;
	}
}
int main()
{
	int choice;
	A:cout<<"Enter your choice\n1.Instertion\n2.Deletion\n3.Display first\n4.Display last\n5.Exit\n---->>>";
	cin>>choice;
	switch(choice)
	{
		case 1: insertion(); goto A;
		case 2: deletion(); goto A;
		case 3: cout<<"\n"<<first->data; goto A;
		case 4: cout<<"\n"<<last->data; goto A;
		case 5: exit(0);
		default: "Wrong choice PLEASE choose again";
	}
	return 0;
}

