#include<iostream> 
#include<cmath>
using namespace std;
class point
{
public:
	void getx_y(int xx,int yy);
	void show_point();
	float distance();
private:
	int x,y;
};
void point::getx_y(int xx,int yy)
{
		x=xx;
		y=yy;
}
float point::distance()
{
		return (sqrt(x*x+y*y));
}
void point::show_point()
{
		cout<<"距原点最大的距离的是："<<x<<" "<<y<<endl;

}
void main()
{
	int x,y,i,point_i;
	float longest=0;
	point point_5[5];
	cout<<"请输入5个点："<<endl;
	for(i=0;i<5;i++)
	{
		cin>>x>>y;
		point_5[i].getx_y(x,y);
	}
	longest=point_5[0].distance();
	point_i=0;
	for(i=1;i<5;i++)
	{
		if(point_5[i].distance()>longest)
		{
			longest=point_5[i].distance();
			point_i=i;
		}
	}
	cout<<"最大距离是：";
	cout<<longest<<endl;
	point_5[point_i].show_point();
}
