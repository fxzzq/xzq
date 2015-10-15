#include <iostream>
using namespace std; 
void reverse(char *s)    
{
	if(*(++s)!='\0')
	  reverse(s);
	  cout<<(*(s-1));
}
int main()
{
		char str[20];
		cout<<"please input a string:";
		cin>>str;
		reverse(str);
		cout<<endl;
		return 0;
}
