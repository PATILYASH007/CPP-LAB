#include<iostream>
using namespace std;
class Box{
    int height;
    float width;
    int length;

    public: Box(){
        height= 5;
        width= 5;
        length= 5;
        
    }
    Box(int a){
    	height= a;
        width= a;
        length= a;
	}
	 Box(int a,int b){
    	height= a;
        width= a;
        length= b;
	}
    int getData(int h,float w,int l)
    {
    	height=h;
    	width=w;
    	length=l;
	}

void Display()
{
	cout<<"height:"<<height<<endl;
	cout<<"width:"<<width<<endl;
	cout<<"length:"<<length<<endl;
	
}
~Box(){
	cout<<"\n Destroided";
}
};
int main()
{
    Box B1(7);
    Box B2(4,5);
    int h,l;
    float w;
    B1.Display();
    B2.Display();
    cout<<"\nEnter the height:";
    cin>>h;
    cout<<"Enter the width:";
    cin>>w;
    cout<<"Enter the length:";
    cin>>l;
    B1.getData(h,w,l);
   
    cout<<"\nEnter the height:";
    cin>>h;
    cout<<"Enter the width:";
    cin>>w;
    cout<<"Enter the length:";
    cin>>l;
    B2.getData(h,w,l);
    B1.Display();
    B2.Display();
    return 0;
}

