#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
using namespace std;
char* Encrypt(char *t1, char *t2, int s)//t1为待加密的文本，t2为用于加密的其它字母序列，s为间隔
{
	 int lt1,lt2,i,j,k,m;       //加密后的密文仍保存于t1(t1应有足够的空间)
	 char *temp;
	 lt1=strlen(t1);//确定t1的长度 
	 lt2=strlen(t2);//确定t2的长度 
	 temp=new char[2*lt1+1];
	 i=k=m=0;
 while(i<lt1)
 {
 	for(j=0; j<s && t1[i+j]; j++)
		 temp[k++]=t1[i+j];
		 i+=s;
		 temp[k++]=t2[m];
		 m=(m+1)%lt2;
 }
	 temp[k]=0;
	 strcpy(t1,temp);
	 delete[] temp;
	 return t1;
}
int main()
{
		 char mw[52];
		 int i=0;
		 cout<<"请输入要加密的字符串：";
		 cin.getline(mw,26);
		 char mm[6]="abcde";
		 char *p;
		 int s;
		 cout<<"请输入字符间隔：";
		 cin>>s;
		 p=Encrypt(mw,mm,s);
		 cout <<p <<endl;
		 system("pause");
		 return 0;
} 
