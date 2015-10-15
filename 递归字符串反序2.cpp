#include <iostream>
#include <string>
using namespace std; 
void reverse( string& s)
{        
	int start=0,end=s.length();
	string tem(s);
while(start<end)
{
	end--;
	swap(tem[start],tem[end]);
	start++;
}
	s=tem;
	cout<<s;
}
int main()
{
	string str;
	cout<<"please input a string:";
	getline(cin,str);
	reverse(str);
	cout<<endl;
	return 0;
}
