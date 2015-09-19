#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"请输入行数（5~10）：";
cin>>n; 
if(n<5||n>10) 
{
	cout<<"数据错误（5~10）";
	continue;
}
else
{
int a[11][11];
int i,j,k;
for(i=1;i<=10;i++)
a[i][1]=a[i][i]=1;
if(n==1)
cout<<"1"<<endl;
if(n>=2)
cout<<"1\n1 1\n";
for(i=3;i<=n;i++)
{
cout<<"1";
for(j=2;j<i;j++)
{
a[i][j]=a[i-1][j]+a[i-1][j-1];
cout<<" "<<a[i][j];
}
cout<<" "<<a[i][i]<<endl;
}
cout<<endl;
}
return 0;
}
