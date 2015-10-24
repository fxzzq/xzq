#include<iostream>
using namespace std;
class shape           //图形类
{
protected:
	double s;
public:
	shape(){s=0;}
	virtual double area(){return 0;}
};
class circle:public shape //圆类
{
private:
	double r;
public:
	circle(double x){r=x;}
	double area()
	{
		s=3.14*r*r;
			cout<<"圆的面积是：";
		return s;
	}
};
class square : public shape//正方形类
{
private:
	double x;
public:
	square(double x)
	{
		this->x=x;	
	}
	double area()
	{
		s=x*x;
		cout<<"正方形的面积是：";
		return s;
	}
};
void main()
{
	circle cir(2);
	square squ(4);
	shape *pshape;
	pshape=&cir;
	cout<<pshape->area()<<endl;
	pshape=&squ;
	cout<<pshape->area()<<endl;
}
/*void main()
{   int i;
	circle cir(2);
	square squ(4);
	shape *pshape[]={&cir,&squ};
	for(i=0;i<2;i++)
	{
		cout<<pshape[i]->area()<<endl;
	}
		
}
*/
