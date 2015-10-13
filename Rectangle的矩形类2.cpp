#include<iostream>
#include<cmath>
using namespace std;
class Rectangle
{public:
	void setplace(double x1,double y1,double x2,double y2)
	{
		lx=x1;ly=y1;
		rx=x2;ry=y2;
	}
	double area()
	{
	return (sqrt((lx-rx)*(lx-rx))*sqrt((ly-ry)*(ly-ry)));
	}
private:
	double lx,ly,rx,ry;
};
int main()
{   Rectangle A;
	double lx1,ly1,rx2,ry2;
	
	cout<<"输入左上角点的横纵坐标，用空格隔开"<<endl;
	cin>>lx1>>ly1;
	cout<<"输入右下角点的横纵坐标，用空格隔开"<<endl;
	cin>>rx2>>ry2;
	A.setplace(lx1,ly1,rx2,ry2);
	cout<<A.area()<<endl;
	return 0;
}

