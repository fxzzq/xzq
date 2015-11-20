/*
题目内容：
设计一个MyTime类，成员函数SetTime()设置时间，
print_12()以12小时制显示时间（AM上午，PM下午），
print_24()以24小时制显示时间。
输入格式:
所需设置时间的时、分、秒

输出格式：
按照12小时制和24小时制依次显示时间,注意时间格式中的冒号是英文冒号

输入样例：
13 23 34

输出样例：
01:23:34 PM
13:23:34
*/
/*
#include<iostream>
using namespace std;
class Mytime{
    private:
      unsigned int hour;
	   unsigned int minute;
	   unsigned int second;
    public:	
	void SetTime(unsigned int nhour,unsigned int nminute,unsigned int nsecond)
	{
		hour=nhour;
		minute=nminute;
		second=nsecond;
	}
    void print_12()
	{
		if(hour<13)
		{
			if(hour<10) 
				cout<<"0"<<hour<<":"<<minute<<":"<<second<<" AM"<<endl;
				else
			cout<<hour<<":"<<minute<<":"<<second<<" AM"<<endl;
		}
		else
		{
			hour=hour-12;
			if(hour<10)
			{
			cout<<"0"<<hour<<":"<<minute<<":"<<second<<" PM"<<endl;
			}
			else
			{
			cout<<hour<<":"<<minute<<":"<<second<<" PM"<<endl;
			}
			hour=hour+12;//修改回去
		}
		
	}

    void print_24()
	{	
		if(hour<10)
		cout<<"0"<<hour<<":"<<minute<<":"<<second<<endl;
		else
		cout<<hour<<":"<<minute<<":"<<second<<endl;
	}
};
int main()
{
	Mytime mytime1;
	unsigned int a,b,c;
	cin>>a>>b>>c;
	if(a>=0&&a<24&&b>=0&&b<60&&c>=0&&c<60)
	{
	mytime1.SetTime(a,b,c);
	mytime1.print_12();
	mytime1.print_24();
	}
		return 0;

}
*/
#include<iostream>
#include<cstring>
using namespace std;
//类的定义
class MyTime
{
    private:   //私有成员 
        int hour;
        int minute;
        int second;
    public:    //公有成员
        void SetTime(int hour,int minute,int second);
        void print_12();  
        void print_24(); 
 } ;
  
 //成员函数的定义
void MyTime::SetTime(int hour,int minute,int second) //设置时间 
{
 
    this->hour=(((hour>=0)&&(hour<24))?hour:0);
    this->minute=(((minute>=0)&&(minute<60))?minute:0);
    this->second=(((second>=0)&&(second<60))?second:0);
}
void MyTime::print_12() //12小时制显示时间 
{
  cout<<((hour-12<10)?"0":"")<<((hour>12)?(hour-12):hour)<<":"<<((minute<10)?"0":"")<<minute<<":"<<((second<10)?"0":"")<<second<<((hour>12)?" PM":" AM")<<endl;
}
 
void MyTime::print_24() //24小时制显示时间
{
  cout<<((hour<10)?"0":"")<<hour<<":"<<((minute<10)?"0":"")<<minute<<":"<<((second<10)?"0":"")<<second;
}
 
 //主函数 
int main()
{
    MyTime text1;  //对象的声明 
    int hour;
    int minute;
    int second;
    cin>>hour>>minute>>second;
    //成员函数的使用 
    text1.SetTime(hour,minute,second);
    text1.print_12();
    text1.print_24();
    return 0;
}
