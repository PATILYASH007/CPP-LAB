//22UAI100
#include<iostream>
using namespace std;
class Complex{
    float real;
    float imaginary;
    public:
    Complex();
    Complex(float r,float i);
    void setReal(float r);
    void setImaginary(float i);
    float getReal();
    float getImaginary();
    Complex operator +(Complex c);
    Complex operator -(Complex c);
};
Complex Complex::operator +(Complex c){
	Complex c2;
	c2.real=real+c.real;
	c2.imaginary=imaginary+c.imaginary;
	return c2;
}
Complex Complex::operator -(Complex c){
	Complex c2;
	c2.real=real-c.real;
	c2.imaginary=imaginary-c.imaginary;
	return c2;
}

Complex::Complex(){
    real=0;
    imaginary=0;
}
Complex::Complex(float r,float i){
    real=r;
    imaginary=i;
}
void Complex::setReal(float r){
    real=r;
}
void Complex::setImaginary(float i){
    imaginary=i;
}
float Complex::getReal()
{
    return real;
}
float Complex::getImaginary(){
    return imaginary;
}

int main(){
    Complex c1,c3;
    Complex c2;
    cout<<c1.getReal()<<"+"<<c1.getImaginary()<<"i"<<endl;
    cout<<c1.getReal()<<"-"<<c1.getImaginary()<<"i"<<endl;
}
