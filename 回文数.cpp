#include<iostream>
using namespace std;
bool symm(int n)
{
	int i=n;
	int	 m=0;
	while(i>0)
	{
		m=m*10+i%10;
		i/=10;
	}
	return m==n;
}
int main()
{
	int a[10];
	int j,k=0;
	cout<<"请输入10个数："<<endl;
	for(j=0;j<10;j++)
	{
		cin>>a[j];	
	}
	cout<<"其中的回文数有："<<endl;
	for(j=0;j<10;j++)
	{
	if(symm(a[j]))
		{
		k++;
		cout<<a[j]<<" ";
		}
	}
	cout<<endl;
	cout<<"回文数的个数："<<k<<endl;
	return 0;
}
