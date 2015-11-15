#include<iostream>
using namespace std;
int main()
{
	int a[100]={1,2,3,4,5,6,7,8,9,10,11};
	int n;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		if(i==0)
		cout<<a[i];
		else 
		cout<<" "<<a[i];
	}
	return 0;
}
