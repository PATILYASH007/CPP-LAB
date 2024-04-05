#include<iostream>
#define MaxSize 100
using namespace std;
class Stack
{
	int stack[MaxSize];
	int top;
	public: Static()
	{
		int top=0;
	}
	public: void push(int a)
	{
		stack[top]=a;
		top++;
	}
	public: void pop()
	{
		top--;
	}
	public: void display()
	{
		for(int i=0;i<top;i++)
		{
			cout<<stack[i]<<"\t";
		}
	}
};
int main()
{
	cout<<"\t\tStack"<<endl;
	Stack s;
	int ch;
	int t=1;
	while(t)
	{
	cout<<"Enter the choice\n1.PUSH\n2.POP\n3.DISPLAY\n";
	cin>>ch;
	switch(ch)
		{
			case 1:
				{
					int a;
					cout<<"Enter Elemenet to be pushed : ";
					cin>>a;
					s.push(a);
					break;
				}
			case 2:
				{
					s.pop();
					break;
				}
			case 3:
				{
					s.display();
					break;
				}
			default:
				{
					cout<<"INVALID CHOICE ";
					break;
				}
				
		}
	cout<<"if want to continue choose any integer\nif not choose 0 \nyour choice :";
	cin>>t;
}
	
}
