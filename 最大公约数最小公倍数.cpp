
#include<iostream>
using namespace std;
int gcd(int x,int y);
int main()
{
	int a,b;
	cout<<"请输入2个整数：";
	cin>>a>>b;
	int g=gcd(a,b);
	cout<<"最大公约数："<<g<<endl;
	cout<<"最小公倍数: "<<(a*b)/g<<endl;
	return 0;
}
int gcd(int x,int y)
{
int t;
	while(y!=0)
	{
		t=x%y;
		x=y;
		y=t;
	}
	return x;
}
