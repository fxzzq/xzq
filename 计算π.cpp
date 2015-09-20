#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		system("color 5e");
	int n=1,sign=1;
	double sum=0.0;
	double u=0.0;
	do
	{

	u=1.0/(2*n-1);
	sum=sum+u*sign;
	sign=(-1)*sign;
	n=n+1; 
	}while(u>1.0e-7);	
	cout<<4*sum<<endl;	
 	return 0;
}
