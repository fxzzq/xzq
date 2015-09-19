#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int i,x,y[5];	
	cin>>x;
	y[0]=x/50;
		x=x%50;
	y[1]=x/20;
		x=x%20;
	y[2]=x/10;
		x=x%10;
	y[3]=x/5;
		x=x%5;
	y[4]=x/1;
		x=x%1;
	for(i=0;i<5;i++)
	{
	  cout<<" "<<y[i];
    }
		    return 0;
}
