/*
输入样例：
8 27

输出样例：
27 27 27 27 27 27 27 27
*/
#include <iostream>
using namespace std;
int *new_array(int n)
{
    return new int[n];
}
void init_array(int *p,int n,int c)
{
    for(int i=0;i<n;*(p+i++)=c)
		;
}
int main()
{
    int n,c,*p;
    cin >> n >> c;
    p=new_array(n);
    init_array(p,n,c);
    for(int i=0;i<n;i++)
	{	if(i==0)
       cout << *(p+i);
		else 
		cout <<" "<< *(p+i);
	}
    delete [n]p;//去掉就对了。我也不知道为啥。
    return 0;
}
