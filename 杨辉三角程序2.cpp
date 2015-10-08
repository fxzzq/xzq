#include<iostream>
using namespace std;
int main()
{
int n,i,j;
int a[11][11];
cout<<"请输入一个数(3-10)："<<endl;
cin>>n;
if(n<3||n>10)
{
cout<<"输入错误！请重新输入！"<<endl;
return main();
}
else
{
for(i=1;i<=n;i++)
	for(j=1;j<=i;j++)
       if(j==1||j==i)
		   a[i][j]=1;
       else
		   a[i][j]=a[i-1][j-1]+a[i-1][j];

for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		cout<<"  "<<a[i][j];
    }
	cout<<endl;
}
}	
	return 0;
}

