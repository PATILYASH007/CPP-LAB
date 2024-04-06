#include<iostream>
#define MaxSize 100
using namespace std;
class Queue
{
	int Queue[MaxSize];
	int front,rear;
	public: Static()
	{
		int front=0;
		int rear=0;
	}
	public: void enqueue(int a)
	{
		Queue[rear]=a;
		rear++;
	}
	public: void dequeue()
	{
		front++;
	}
	public: void display()
	{
		for(int i=front;i<rear;i++)
		{
			cout<<Queue[i]<<"\t";
		}
	}
};
int main()
{
	cout<<"\t\tQueue"<<endl;
	Queue s;
	int ch;
	int t=1;
	while(t)
	{
	cout<<"Enter the choice\n1.Enqueue\n2.Dequeue\n3.DISPLAY\n";
	cin>>ch;
	switch(ch)
		{
			case 1:
				{
					int a;
					cout<<"Enter Elemenet to be Enqueued : ";
					cin>>a;
					s.enqueue(a);
					break;
				}
			case 2:
				{
					s.dequeue();
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
