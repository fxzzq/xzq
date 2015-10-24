#include <iostream>
using namespace std;
int  isprime(int a);
int main()
{
int  a[50];
	int i=0,j=0,q=0,k=0;
	int num;
	int b[50];
while(num!=0)//输入一系列整数，以0表示输入结束
	{
		cin>>num;
		a[i++]=num;
		q++;
	}
for(i=0;i<=q-2;i++)
{
	if(isprime(a[i])!=0)
	{
		b[j++]=a[i];
	 	k++;//素数的个数
	}
}
for(j=0;j<k;j++)
	{
		if((j+1)%k!=0)//最后一个数后没有空格
		{
		cout<<b[j]<<" ";
		}
		else
		{
			cout<<b[j];
		}
	}

	return 0;
}
int isprime(int a)//素数的判断
{
	int m=a-1,i;
	for(i=a-1;i>1&&m!=0;i--)
	{
		m=a%i;
	}
	return (m!=0?1:0);
}

