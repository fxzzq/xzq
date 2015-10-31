#include <iostream>
using namespace std;
inline int area(int x,int y); //内联函数求面积 
inline int zhou(int x,int y);//内联函数求周长 
int main()
{
    int a,b;
    cin>>a>>b;//输入长a，宽b。
    cout<<area(a,b)<<" "<<zhou(a,b)<<endl;
    return 0;
}
inline int area(int x,int y)
{
    return x*y;
}
inline int zhou(int x,int y)
{
    return 2*(x+y);
}
