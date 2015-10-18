#include<iostream> 
#include<cstring> 
using namespace std;  
void mystrrev(char string[]);
int main() 
{ 
	cout<<"请输入字符串（不多于个字符）："<<endl; 
	char in[81];  
	cin.get(in,81);	//输入字符串，允许输入空格
	mystrrev(in);
	cout<<endl; 
	return 0;  
}  
void mystrrev(char string[]) 
{ 
	int m=strlen(string); 
	int mid; 
	for(int i=0;i<m/2;i++)//将字符串的前一半字符与后一半字符对应交换，因而只执行m/2 
		{ 
			mid=string[i];  
			string[i]=string[m-i-1]; 
			string[m-i-1]=mid;  
		}  
	string[m]='\0';//字符串结束
	cout<<"反转结果为：\n"<<string;
}

