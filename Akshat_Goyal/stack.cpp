#include<iostream>
using namespace std;
struct node
{
	int data;
	node *link;
};

node *top = Null;

void push(int max, int *curr)
{
	if(max<=*curr)
		cout<<"\nStack is FULL\n";
	else
	{
		int value;
		cin>>value;
		node *ptr = new node;
		ptr->data = value;
		ptr->link = top;
		*curr++;
	}
}

void pop(int *curr)
{
	if(*curr == 0)
		cout<<"\n Stack is EMPTY\n";
	else
	{
		node *ptr=top;
		top = top->link;
		delet(*ptr);
		*cur--;
	}
}

int main()
{
	int current = 0,maximum,choice;
	cout<<"Enter the maximum value of stack can accommodate:";
	cin>>maximum;
	A: cout<<"\nEnter your choice\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\->:";
	   cin>>choice;
	   switch(choice)
	   {
		case 1: push(maximum, &current); goto A;
		case 2:	pop(&current); goto A;
		case 3: cout<<top->data; goto A;
		case 4: exit(0);
		default: cout<<"Enter the choice for given above"; goto A;
	   }
	return 0;		
}
