#include<iostream>
using namespace std;
long getpower(int x,int y);
int main()
{
	int num,power;
	long answer;
	cout<<"输入一个数"<<endl;
	cin>>num;
	cin>>power;
	answer=getpower(num,power);
	cout<<num<<"to the"<<power<<"power is"<<answer<< endl;
	return 0;
 } 
long getpower(int x,int y)
{
	if(y==1)
	return x;
	else
	return(x*getpower(x,y-1));
}
