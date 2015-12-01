/* 
题目内容：
输入一个正整数。计算其平方根(用sqrt函数)，并将结果按取1~6位小数分六行显示出来。

输入格式:
输入一个正整数。

输出格式：
计算结果分6行显示，小数位数依次取1~6位。

输入样例：
2

输出样例：
1.4
1.41
1.414
1.4142
1.41421
1.414214
*/ 
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int x;
	double y;
	cin>>x;
	y=sqrt(x);
	cout<<fixed<<setprecision(1)<<y<<endl;//  加fixed 才行一位小数 
	cout<<fixed<<setprecision(2)<<y<<endl;
	cout<<fixed<<setprecision(3)<<y<<endl;
	cout<<fixed<<setprecision(4)<<y<<endl;
	cout<<fixed<<setprecision(5)<<y<<endl;
	cout<<fixed<<setprecision(6)<<y<<endl;
	  return 0;
}
