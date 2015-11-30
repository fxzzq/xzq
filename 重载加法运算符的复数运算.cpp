/* 
题目内容：
题目内容：
定义一个复数类，并重载加法运算符（+）和赋值运算符（=）以适用对复数运算的要求。

输入格式:
依次输入两个复数的实部和虚部

输出格式：
先按照要求格式输出两个复数，然后输出这两个复数的和

输入样例：
1 2
3 4

输出样例：
1+j2
3+j4
4+j6
*/ 
#include<iostream>
using namespace std;
class Complex
{
	double real;
	double imag;
public:
	Complex(double r=0,double i=0){//必须初始化 
		real=r;
		imag=i;
	}
	Complex operator+ (const Complex &c2) const;//&c2 c2的引用 
	void display(){
		cout<<real<<"+"<<"j"<<imag<<endl;
	} 

};
Complex Complex::operator+ (const Complex &c2) const//&c2 c2的引用 
	{
		return Complex(real+c2.real,imag+c2.imag);
	}
int main()
{
	double x1,y1,x2,y2;
	cin>>x1>>y1;
	cin>>x2>>y2;
	Complex a(x1,y1),b(x2,y2),c; 
	a.display();
	b.display(); 
	c=a+b;
	c.display();
   return 0;
 } 


