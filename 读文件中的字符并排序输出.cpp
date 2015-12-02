/*
题目内容：
输入n个字符写入文本文件A.txt，字符间用空格分开。在打开该文件，
读取所有字符并排序后，按从小到大顺序写入B.txt（字符间用空格分开），同时将文件B的内容显示在屏幕上。

输入格式:
第一行输入数字个数n，第2行输入n个字符(以空格分开）。

输出格式：
按从小到大顺序输出n个字符(以空格分开）

输入样例：
5
Z  Y  X  A  C

输出样例：
A C X Y Z
*/
#include <iostream>
#include<fstream>//文件操作头文件
using namespace std;
int main()
{
	int N,i,j,temp; 
	char a[100]; //存放输入的数据
	/* 
	ofstream fout("A.txt");  //创建输出文件流对象。打开文件
	ofstream fx("B.txt") ;//空文本 
    if(!fout)  //如果文件打开失败
    {
        cout<<"output file open error\n";    
    }
    */
	
	cin>>N;//请输入排序的总个数
for(i=0;i<N;i++) 
     cin>>a[i];
/*
    for(i=0;i<N;i++)
	fout<<a[i]<<" ";//文件输出数据
    fout.close();//关闭文件
    fout.clear();//初始化fout对象的各种标志
     ifstream fin("B.txt");////创建输入流对象。打开文件
     if(!fin){//处理文件打开失败情况
        cout<<"input file open error\n";    
    } 
*/
for(i=0;i<N-1;i++) 
{ 
	for (j=0;j<N-1-i;j++) 
		if (a[j]>a[j+1]) 
		{ 
			temp=a[j]; 
			a[j]=a[j+1]; 
			a[j+1]=temp;
		} 
} 
/*
for(i=0;i<N;i++) {
	if(i==0)
	   fx<<a[i];
	else
	    fx<<" "<<a[i];
}
   fx<<endl;
	fin.close();//关闭文件
	fin.clear();//初始化fin对象的各种标志
	*/
	  for(i=0;i<N;i++) {
	if(i==0)
	   cout<<a[i];
	else
	    cout<<" "<<a[i];
}
   cout<<endl;
return 0;
}
