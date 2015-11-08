/*题目内容：
编写求数学函数区间平均值的通用函数，
可以计算出在指定区间内函数的平均值(取整即可)。
待求区间平均值的两个函数的原型为：
int  func1(int x);
int  func2(int x)
只考虑参数为整数的情况即可。
func1的数学表达式为：y=a*x^2+b*x+c，a,b,c由用户输入；
func2的数学表达式为：y=x^m，m由用户输入；
通用函数的参数为待求区间平均值函数的指针，以及给出的区间下界与上界。
比如 func1 = 3*x^2+2*x+1, 区间下界与上界分别为0和3，则
func1(0)=1
func1(1)=6
func1(2)=17
func1(3)=34
则平均值为：（1+6+17+34）/4=14 （直接取整不四舍五入)
提示：（1）由于函数原型的限制，a,b,c和m参数可以使用全局变量传递。
（2）通用函数原型可设为：int avg( int (*f)(int),int x1,int x2);


输入格式:
用户依次输入：
func1的参数 a,b,c
func2的参数 m
给出的区间下界与上界

输出格式：
func1的区间内平均值
func2的区间内平均值

输入样例：
3 2 1
1
0 3

输出样例：
14
1
*/
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int a,b,c,m;
int  func1(int x);
int  func2(int x);
int avg(int(*f)(int),int x1,int x2);
 
int main()
{
    int up,down;
    cin>>a>>b>>c>>m>>down>>up;
    cout<<avg(func1,down,up)<<endl;
    cout<<avg(func2,down,up);
 
}
int  func1(int x)
{
    return(a*x*x+b*x+c);
}
int func2(int x)
{
    while(m)
    {
	  x*=x;
	  m--;
	}
    
     return(x);
}
int avg(int(*f)(int),int x1,int x2)
{
    int sum=0,i=0;
    for(i=x1;i<=x2;i++)
    {
        sum=sum+(*f)(i);
    }
    return(sum/(x2-x1+1));
}
