/* 
题目内容：
编写一个矩阵类，重载矩阵加法运算。设A，B，C均为m行，n列的矩阵，要求程序能实现C=A+B的操作。 

输入格式:
第一行为矩阵的行数和列数，下面为两个矩阵的元素值

输出格式：
两个矩阵的和。注意，输出的每行元素，行末没有空格。

输入样例：
2 3
1 3 2
4 2 5
2 3 4
3 2 6
输出样例：
3 6 6
7 4 11
*/ 
#include<iostream>
#include<cstdlib>
using namespace std;
class Array
{
    private:
        int row,col;
         
    public:
        int **a;
      void row_col(int,int);
    friend Array operator + (Array &a1,Array &a2);
     void print();
};
 
Array operator + (Array& a1,Array &a2)
{
	 Array temp;
	 temp=a1;
	  for(int i=0;i<a1.row;i++)
	  for(int j=0;j<a1.col;j++)
	    temp.a[i][j]=a1.a[i][j]+a2.a[i][j];
	  return temp;
}
 
void Array::row_col(int _row, int _col)
{
     row=_row;
     col=_col;
   a = new int *[_row];
 for (int i = 0; i <_row;i++)
	{
	    a[i] = new int[_col];
	}
	 	  for (int i = 0; i<_row;i++)
		{
	   for (int j = 0; j<_col;j++)
			{
	    cin>>a[i][j];
			}
		}
}
 
void Array::print()
{
    for (int i=0;i<row;i++)
    {
    	 for(int j=0;j<col;j++)
		 {
		if(j==0){
			cout<<a[i][j];
		}
		else
		{
			  cout<<" "<<a[i][j];
		}
      	}
      	cout<<endl;
    }
}
 
int main()
{
	 int row,col;
	 Array a1,a2,a3;
	 cin>>row>>col;
	 a1.row_col(row,col);
	 a2.row_col(row,col);
	 a3=a1+a2;
	// system("cls");
	 a3.print();
	  return 0;
}
