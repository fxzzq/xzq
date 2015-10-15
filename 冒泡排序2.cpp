#include <iostream>
using namespace std;
int main()
{
	int N=0,num,i=0,j,temp; 
	int a[100]; 
	cout<<"请输入数,以999结束输入"<<endl;
	while(num!=999)
	{   cin>>num;
		N++;
		a[i++]=num;
		

	}
	N=N-1;
for(i=0;i<N-1;i++) 
{ 
	for (j=0;j<N-1-i;j++) 
		if (a[j]>a[j+1]) 
		{ 
			temp=a[j]; 
			a[j]=a[j+1]; 
			a[j+1]=temp;
		} 
} 
for(i=0;i<N;i++) 
cout<<a[i]<<" ";
cout<<endl;
return 0;
}

