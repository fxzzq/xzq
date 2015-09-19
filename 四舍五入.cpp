#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y,z,sum,sishe;
	double average;
	cin>>x>>y>>z;
    sum=x+y+z;
    average=(x+y+z)/3.0;
    sishe=int(average+0.5);
	cout<<sum<<endl;
	cout<<average<<endl;
	cout<<sishe<<endl;
	 return 0;
} 
