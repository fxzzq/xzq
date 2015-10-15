#include <iostream>
#include <string>
using namespace std;
int k=15;
void reverse( string &s)
{
	if(k>=0)
	cout<<s[k--];
	reverse(s);
} 
int main()
{
  string str;
  cout<<"请输入字符串:    ";
  getline(cin,str);
  cout<<"倒序后的字符串为：";
  reverse(str);
  cout<<endl;
  return 0;
}
