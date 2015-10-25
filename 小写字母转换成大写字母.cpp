#include<iostream>
using namespace std;
void tf(char s[],char out[]);
int main() 
{
	 char s[100];
	 char out[100];
	 cin.getline(s,100);
	 tf(s,out);
	cout<<out<<endl;
 return 0;
}
void tf(char s[],char out[])
{
	 int i;
	 int j=0;
	 for(i=0;i<100;i++)
	 {
	  	if(s[i]==32||(s[i]>=65&&s[i]<=90))//对输入空格 大写的处理 
			  {
				 out[j]=s[i];
				 j++;
			  }
	  else if(s[i]>=97&&s[i]<=122)//对输入小写的处理 
		  {
			out[j]=s[i]-32;
			j++;
		  }
	 else if(s[i]=='\0')//其它输入字符的处理 
	   break;
	 }
	 out[j]='\0';
}
