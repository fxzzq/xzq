/*
题目内容：
输入n个数字（实数），将他们写入文件out1.txt，数字之间用空格分开。然后再次打开该文件，读出全部数字，计算他们平均值并输出在屏幕上。

输入格式:
第一行输入数字个数n，以后的n行每行输入一个实数。

输出格式：
输出n个数平均值。格式：Avg=平均值

输入样例：
5
1.0
2.0
3.0
4.0
5.0

输出样例：
Avg=3
*/
#include<iostream>
#include<fstream>//文件操作头文件
using namespace std;
int main()
{
	double a[100];//存放输入的数据
	double sum,avg;
	int i,n;
	/*
	ofstream fout("out1.txt");  //创建输出文件流对象。打开文件
    if(!fout)  //如果文件打开失败
    {
        cout<<"output file open error\n";    
    }
    */
	cin>>n;//输入个数 
	for(i=0;i<n;i++)
	{
		cin>>a[i]; 
	} 
	/*
    for(i=0;i<n;i++)fout<<a[i]<<" ";//文件输出数据
    fout.close();//关闭文件
    fout.clear();//初始化fout对象的各种标志
    ifstream fin("out1.txt");////创建输入流对象。打开文件
    if(!fin){//处理文件打开失败情况
        cout<<"input file open error\n";    
    } 

    i=0;//读取的数据的个数
    while(fin)//循环读文件
    {
        fin>>a[i];//读文件
        if(fin)//数据读取到
        {
            i++;
        }
    }
    */
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	avg=(double)(sum/n);
	 cout<<"Avg="<<avg<<endl;
	//fin.close();//关闭文件
	//fin.clear();//初始化fin对象的各种标志
	 return 0;
}
