/*
题目内容：
输入5行信息，生成文件A.txt。然后再次打开该文件，为每一行前面加一个行号后显示在屏幕上，行号占据4个字符宽，行号左对齐显示。

输入格式:
5行字符，每行字符中可以有空格，长度小于80

输出格式：
行号占据4个字符宽，行号左对齐显示。

输入样例：
AB
CD
EF
UV
XY

输出样例：
1   AB
2   CD
3   EF
4   UV
5   XY
*/ 
#include<iostream>
#include <fstream>//文件操作头文件
#include<iomanip>
using namespace std;
int main()
{
	char ch[5][80];  //存放输入、输出的数据 
	int i=0,num=0;
	/*
	ofstream fout("A.txt");  //创建输出文件流对象。打开文件
    if(!fout)  //如果文件打开失败
    {
        cout<<"output file open error\n";    
    }
    */
 	for( i=0;i<5;i++)
	 {
        cin.getline(ch[i],80,'\n');//输入第一行回车 
     }
     
     /*
     for(i=0;i<5;i++)
	 {
	 	fout<<ch[i]<<endl;//文件输出数据
	 }
     fout.close();//关闭文件
     fout.clear();//初始化fout对象的各种标志
     ifstream fin("A.txt");////创建输入流对象。打开文件
     if(!fin){//处理文件打开失败情况
        cout<<"input file open error\n";    
    } 
     num=0;//读取的数据的个数
    while(fin)//循环读文件
    {
        fin>>ch[num];//读文件
        if(fin)//数据读取到
        {
            num++;
        }
    }
     */
     num=0;
     for( i=0;i<5;i++)
	 {
	 	num++;
	 	cout<<setiosflags(ios_base::left);//行号左对齐 
     	cout<<setw(4)<<num;  //输出行号 
     	cout<<resetiosflags(ios_base::left);//字符串左对齐 
		cout<<ch[i]<<endl; // 输出字符串 
		
	 }
	//fin.close();//关闭文件
    //fin.clear();//初始化fin对象的各种标志
     return 0;
}
