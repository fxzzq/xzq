/*
题目内容：
用户首先输入两个整数m和n,然后输入m*n个元素，建立一个m*n的二维数组。要求使用 行指针 来遍历这个二维数组，输出该数组中所有元素的和。

输入格式:
首先输入两个整数m和n,然后依次输入m*n个元素

输出格式：
二维数组中所有元素的和

输入样例：
2 3
1 3 5 
2 4 6

输出样例：
21
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n,s;
    cin>>m>>n;
    int *p,**a;
    a=(int **)new int*[m];
    for ( i=0;i<m;i++ ) a[i]=new int[n];
		for ( i=0,p=a[0];i<m;i++,p=a[i] )
			for ( j=0;j<n;j++,p++ ) 
				cin>>(*p);
    for ( i=s=0,p=a[0];i<m;i++,p=a[i] )
		for ( j=0;j<n;j++,p++ )
			s+=(*p);
			cout<<s<<endl;
	return 0;
}
