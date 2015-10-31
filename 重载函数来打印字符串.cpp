#include <iostream>
#include <cstring>
using namespace std;
void print_spaced(char str1[])// char
{
	int i=0;
	while(str1[i]!='\0')
	{
		if(i==0)
		cout<<str1[0];//第1个数直接输出 
		else
		{
			cout<<" "<<str1[i];//第2个以后，前面加空格	
		}
	
		i++;
	}
 } 
void print_spaced(string str2)//string
 {
 	int j=0;
	while(str2[j]!='\0')
	{
		
		if(j==0)
		cout<<str2[0];//第1个数直接输出 
		else
		{
			cout<<" "<<str2[j];//第2个以后，前面加空格
		}
		
		j++;
	}
 }
 int main()
 {
   	char str1[10];
   	string str2;
   	cin>>str1;
   	cin>>str2;
  	print_spaced(str1);
  	cout<<endl;
  	print_spaced(str2);
  	return 0;
 }
