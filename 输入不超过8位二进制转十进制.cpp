#include<iostream>
using namespace std;
double power(double x,int n)//计算x的n次方
{
	double val=1.0;
	while(n--)
	val*=x;
	return val;
}
void main()
{
	int i=0,nm=0;//nm用于计数
	int num;
	int value=0;
	char n[8];
cout<<"输入一个不超过8位数的二进制：\n";
do
{
	num=getchar();
	n[i++]=num;//存入数组中
	nm++;
}
while(num!='\n');
if(nm<10)//不超过8位执行下面
	{
		for(i=nm-2;i>=0;i--)
		{
			if(n[i]=='1')//计算二进制位为1的和
			{
				value+=(int)(power(2,i));
			}
		}
	 cout<<"该数的十进制是： "<<value<<endl;
	}
}

