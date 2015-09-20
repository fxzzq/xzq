#include<iostream>
using namespace std;
float p(int n,int x);
int  main()
{
 int n,x;
 cout<<"请输入正整数：n："<<endl;
 cin>>n;
 cout<<"请输入正整数：x："<<endl;
 cin>>x;
 cout<<p(n,x)<<endl; 
 } 
 float p(int n,int x)
 {
 	if(n==0)
 	return 1;
 	else if (n==1)
 	return x;
 	else
 	return((2*n-1)*x*p(n-1,x)-(n-1)*p(n-2,x))/n;
 }
