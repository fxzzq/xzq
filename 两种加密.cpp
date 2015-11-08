/*输入样例：
jacky
2

输出样例：
jcyak
输入样例：
xzqa
1

输出样例：
ACTD
*/
#include<iostream> 
#include<string> 
using namespace std; 
void  encode(string &s)//凯撒加密
{  
 int i=s.length(); 
 for(int j=0;j<i;++j) 
 { 
  if('A'<=s[j]&&s[j]<='Z') 
  { 
   if('A'<=s[j]&&s[j]<='W') 
    s[j]+=3; 
   else 
    s[j]-=23; 
   s[j]+=32; 
  } 
  else if('a'<=s[j]&&s[j]<='z') 
  { 
   if('a'<=s[j]&&s[j]<='w') 
    s[j]+=3; 
   else 
    s[j]-=23; 
   s[j]-=32;   
  }     
 } 
} 
void danmu(char s[200])//单双号加密 
{
	int n=0;
	int j=0;
	int i;
	char t[200];
	while(s[n]!='\0')
	{
		n++;
	}             //n计算字符数组s的元素个数 
	
    for(i=0;i<n;i=i+2)
    {
    	t[j]=s[i];
      	j++;
	}             //将s数组双号元素放入t数组 
	for( i=1;i<n;i=i+2)
	{
		t[j]=s[i];
	   j++; 
	}             //将s后面的单号元素依次放入 
	for(i=0;i<n;i++)
	{
		s[i]=t[i];
	}            
	s[n]='\0';            //在末尾添加结束标记 
}
int main()
{
 char a[200];
 int n;
 
 gets(a);
 cin>>n;
  if(n==1)
  {
	  string b(a);
	encode(b); 
 cout<<b<<endl; 
  }
 if(n==2)
 {
	 danmu(a); 
	cout<<a<<endl; 
 }
 return 0; 
}
