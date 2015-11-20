/*题目内容：
设计一个Weekday类，成员函数SetDay()设置星期几，
IncDay()前进一天，NowDay()打印当前是星期几。
输入格式:
用户输入一个数字，0表示星期日，1表示星期一，类推，
6表示星期六，用该数字初始化Weekday类
输出格式：
使用中文打印出从当日起连续3天是星期几
输入样例：
0

输出样例：
星期日
星期一
星期二
*/
#include<iostream>
using namespace std;
class weekday
{
    private:
       char *ss[7]={"星期日","星期一","星期二","星期三","星期四","星期五","星期六"};
    public :
    void SetDay();
    void IncDay(int m);
        void NowDay(int n);
};
 
void weekday::SetDay()
{
};
 
void weekday::NowDay(int n)
{
    cout<<ss[n]<<endl;
}
 
void weekday::IncDay(int m)
{
   int j=m%7;
      cout<<ss[j]<<endl;
}
 
int main()
{
    int i;
    cin>>i;
    if(i<0||i>6)
    {
        cout<<"invalid weekday.";
        return 0;
    }
    weekday ww;
    ww.SetDay();
    ww.NowDay(i);
    ww.IncDay(i+1);
    ww.IncDay(i+2);
}
