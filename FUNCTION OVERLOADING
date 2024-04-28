#include<iostream>
#include<math.h>
#define pi 3.14
using namespace std;

class Circle{
	double centerX;
	double centerY;
	protected:double radius,circumference,area;
	public: 
		Circle()
		{
			centerX=0;
			centerY=0;
			radius=5;
			calcCirumference();
			calcArea();
		}
		Circle(double cx,double cy)
		{
			centerX=cx;
			centerY=cy;
			radius=5;
			calcCirumference();
			calcArea();
		}
		Circle(double cx,double cy,double r)
		{
			centerX=cx;
			centerY=cy;
			radius=r;
			calcCirumference();
			calcArea();
		}
		void calcCirumference()
		{
			circumference=2*pi*radius;
		}
		void calcArea()
		{
			area=pi*radius*radius;
		}
		void disArea()
		{
			cout<<area<<endl;
		}
		void disCirumference()
		{
			cout<<circumference<<endl;
		}
};
class Line:public Circle{
	double x1,y1,x2,y2,slop,interceptX,interceptY;
	public:
		void getPt1(double x,double y)
		{
			x1=x;
			y1=y;
		}
		void getPt2(double x,double y)
		{
			x2=x;
			y2=y;
		}
		void getdoubleercept(double x,double y)
		{
			interceptX=x;
			interceptY=y;
		}
		void calSlop(double X1,double Y1,double X2,double Y2)
		{
			slop=(Y2-Y1)/(X2-X1);
		}
		void isTangent(double x1,double y1,double slop)
		{
			double c=y1-slop*x1;
			double tan=(radius*radius)*((slop*slop)+1);
			if(c*c==tan)
			{
				cout<<"LINE IS TANGENT ! "<<endl;
			}
			else
			{
				cout<<"LINE IS NOT TANGENT ! "<<endl;
			}
		}
		void isTangent(double x,double y,double cx,double cy)
		{
			int dist=sqrt(pow((cx-x),2)+pow((cy-y),2));
			if(radius==dist)
			{
				cout<<"LINE IS TANGENT ! "<<endl;
			}
			else
			{
				cout<<"LINE IS NOT TANGENT ! "<<endl;
			}
		}
};
int main()
{
	Circle C(0,0,5);
	C.disArea();
	C.disCirumference();

	Line L;
	L.getPt1(2,2);
	L.getPt2(3,3);
	L.isTangent(0,5,3);
	L.isTangent(3,4,0,0);

}
