#include<iostream>
#include<string>
using namespace std;
/******start******/
int change(string str1)
{
	int len,sum=0;
	int n=1;
	
	for(len=str1.size();len>0;len--)
	{
		if(str1[len-1]=='1')
		{
			sum+=n;
		}
		n*=2;
	}
	return sum;
}

/******end******/
int main()

{
	string str;
	cout<<"please input binary data: ";
	cin>>str;

	cout<<"Output:";
	cout<<"dec="<<change(str)<<endl;
	return 0;
}
