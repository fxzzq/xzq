/*
题目内容：
编写一个程序，从键盘输入一行字符（可包含各种字符，遇回车符结束），
写入到文件a1.txt中；再从a1.txt中读出文件内容，将其中的小写字母转换成大写字母后显示在屏幕上。

提示：输入带空格的字符串，用cin.getline()。

输入格式:
一个字符串，中间可能有大写或小写字母、空格、数字以及其他标点符号。长度小于80。

输出格式：
输出同输入内容相同的字符串，其中小写字母变成大写字母。

输入样例：
We are students from Xi’an Jiaotong University.

输出样例：
WE ARE STUDENTS FROM XI’AN JIAOTONG UNIVERSITY.

注：提交时，注释文件操作语句。 
*/ 
#include<iostream>
#include<fstream>//文件操作头文件
using namespace std;
void tf(char s[],char out[]);
int main() 
{
	 char s[80];
	 char out[80];
	 int i, n;
	 /*
	ofstream fout("a1.txt");  //创建输出文件流对象。打开文件
    if(!fout)  //如果文件打开失败
    {
        cout<<"output file open error\n";    
    }
    */
     cin.getline(s,80);//输入数据
	 tf(s,out);//调用tf函数 
    
    /*
    i=0;//文件输出数据
    while(s[i]!='\0'){
    	fout.put(s[i]);
    	i++;
	}
    fout.close();//关闭文件
    fout.clear();//初始化fout对象的各种标志
    ifstream fin("a1.txt");////创建输入流对象。打开文件
    if(!fin){//处理文件打开失败情况
        cout<<"input file open error\n";    
    } 

    n=0;//读取的数据的个数
    while(fin)//循环读文件
    {
        fin>>s[n];//读文件
        if(fin)//数据读取到
        {
            n++;
        }
    }
    */ 
	cout<<out<<endl;//输出 
	//fin.close();//关闭文件
	//fin.clear();//初始化fin对象的各种标志
 return 0;
}
void tf(char s[],char out[])//tf函数 
{
	 int i;
	 int j=0;
	 for(i=0;i<80;i++)
	 {
	  
		
	   if(s[i]>='a'&&s[i]<='z')//对输入小写的处理 
		  {
			out[j]=s[i]-32;
			j++;
		  }
	else
  		{
		 out[j]=s[i];
		 j++;
		}
	 }

}

