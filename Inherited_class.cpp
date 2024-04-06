#include<iostream>
#include<string>
/* Person is base class & Student is derived  class
in person address is protected & in student marks of student is private
*/ 
using namespace std;
class Person{
	public:
		string name;
		int age;
	protected:
		string address;
};
class Student:public Person{
	private: 
		int marks;
	public:
		string roll_no;
		
		void set_address(string a)
		{
			address=a;
		}
		void set_marks(int m)
		{
			marks=m;
		}
		
		void display()
		{
			cout<<"NAME:"<<name<<"\n";
			cout<<"AGE:"<<age<<"\n";
			cout<<"ROLL NO: "<<roll_no<<"\n";
			cout<<"MARKS OF STUDENT: "<<marks<<"\n";
			cout<<"ADDRESS : "<<address<<"\n"<<endl;
		}
};
int main()
{
	Student s1;
	s1.name="YASH";
	s1.age=18;
	s1.roll_no="22UAI100";
	int marks=90;
	string address="Renuka Nager,Yadrav.";
	s1.set_address(address);
	s1.set_marks(marks);
	s1.display();
	
}

