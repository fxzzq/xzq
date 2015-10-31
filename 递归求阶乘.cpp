#include <iostream>
using namespace std;
int jiecheng(int n);
int main()
{
	int x;/x为输入要求的阶乘
	cin>>x;
	cout<<jiecheng(x)<<endl;
	return 0; 
 } 
 int jiecheng(int n)
 {
 	int f;
 	if(n==0||n==1)
 	f=1;
 	else 
 	f=jiecheng(n-1)*n;//递归
 	return f;
 }
