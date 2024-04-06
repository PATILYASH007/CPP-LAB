#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class Date{
	int day;
	int month;
	int year;
	
	public: Date()
	{
		day=17;
		month= 8;
		year=2005;
	}
	public: string Month(int m)
	{
	string arr[]={" ","JAN","FEB","MAR","APR","MAY","JUNE","JULY","AUG","SEP","OCT","NOV","DEC"};
	return arr[m];
}
	public: Date(int d,int m,int y)
	{
		day=d;
		month=m;
		year=y;
	}
   static int dateDiff(Date d1,Date d2)
   { 
   	int y=0,m=0,d=0,diff=0;
   	int dim[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
   	if(d1.year==d2.year)
   	{
   		if(d1.month==d2.month)
   		{
   			d=abs(d1.day-d2.day);
   			cout<<"Differece in days: "<<d<<" Month "<<m<<" year "<<y;
		   }
		   else 
		   {
		   	m=abs(d1.month-d2.month);
		   	d=abs(d1.day-d2.day);
   			cout<<"Differece in days: "<<d<<" Month: "<<m<<" year: "<<y;
		   }
	   }
	   else 
		   {
		   	y=abs(d1.year-d2.year);
		   	m=abs(d1.month-d2.month);
		   	d=abs(d1.day-d2.day);
   			cout<<"Differece in days: "<<d<<" Month "<<m<<" year "<<y;
		   }
   }
	 public: Display(){
	 	cout<<day<<"-"<<month<<"-"<<year<<endl;
	 	cout<<day<<"/"<<month<<"/"<<year<<endl;
	 	cout<<day<<"-"<<Month(month)<<"-"<<year<<endl;
	 	
   }
   

};
int main()
{	
	int d,m,y,D,M,Y;
	
	
	cout<<"Enter day : ";
	cin>>d;
	cout<<"Enter month : ";
	cin>>m;
	cout<<"Enter year : \n";
	cin>>y;
	Date d1(d,m,y);
	
	
	cout<<"Enter day : ";
	cin>>D;
	cout<<"Enter month : ";
	cin>>M;
	cout<<"Enter year : ";
	cin>>Y;
	Date d2(D,M,Y);
	
	
	
	d1.Display();
	d2.Display();
	Date::dateDiff(d1,d2);
	
}
