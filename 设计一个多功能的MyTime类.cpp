/*题目内容：
设计一个多功能的MyTime类，设计多个重载的构造函数，
可以设置时间，进行时间的加减运算，按各种可能的格式
（24小时制、12小时制）输出时间。
注意：
（1）请考虑设置的时间的合理性（时0-23； 分0-59；秒0-59）。
（2）12小时制中，12:00:00前为AM， 12:00:00及以后为PM
（3）加减运算的加数、减数是一个时间的长度，单位为“时、分、秒”
（4）构造函数：没参数时，设置时间为0时 0分 0秒；有参数时，设置成给定的时、分、秒。
 在主函数中
（1）声明两个对象t1,t2，并通过构造函数初始化它们（t2初始化为为8：10：30）
（2）显示按12、14小时制显示t1、t2的时间。
（3）再设置t1的时间，数据由用户输入。
（4）再输入待加减的时间。
（5）t1加输入的时间，并按12小时和24小时制显示。
（6）t2减输入的时间，并按12小时和24小时制显示。

输入格式:
第一行为t1的时间，第二行为待加减的时间

输出格式：
显示按12、14小时制显示t1、t2的初始时间
t1加输入的待加减的时间按12小时和24小时制显示。
t2减输入的待加减的时间按12小时和24小时制显示

输入样例：
11 30 30
5 15 20

输出样例：
00:00:00 AM
00:00:00
08:10:30 AM
08:10:30
04:45:50 PM
16:45:50
02:55:10 AM
02:55:10
*/
#include<iostream>
#include<cstring>
#include<cmath> 
using namespace std;
class MyTime{
    private:
        int second;
        int minute;
        int hour;
    public:
    	int seccale(); 
        MyTime():hour(0),minute(0),second(0){
        };
        MyTime(int h,int m,int s){
            hour=8;
            minute=10;
            second=30;
        }
        void SetTime(int h=0,int m=0,int s=0);
        void print_12();
        void print_24();
        void TimeAdd(int h, int m, int s); 
   		 MyTime sub(MyTime&); //-
  
        ~MyTime() {
        }
};
void MyTime::SetTime(int h,int m,int s){
    hour=(((h>=0)&&(h<=23))?h:0);
    minute=(((m>=0)&&(m<=59))?m:0);
    second=(((s>=0)&&(s<=59))?s:0);
}
void MyTime::print_24(){
  cout<<((hour<10)?"0":"")<<hour <<":"
      <<((minute<10)?"0":"")<<minute<<":"
	  <<((second<10)?"0":"")<<second<<endl;
}
void MyTime::print_12(){
	 cout<<((hour-12<10)?"0":"")<<((hour>12)?(hour-12):hour)<<":"
	 	 <<((minute<10)?"0":"")<<minute<<":"
		 <<((second<10)?"0":"")<<second
		 <<((hour>12)?" PM":" AM")<<endl;
}

void MyTime::TimeAdd(int h, int m, int s) {//系统时间加上 h:m:s 
    int s_m = 0;//秒-分 
    int m_h = 0;//分-时 
    second = second + s;
    if (second>59){
        second = second - 60;
        s_m++;
    }
    minute = minute + m +s_m;
    if (minute>59){
        minute = minute - 60;
        m_h++;
    }
      
    hour = hour + h + m_h;
    if (hour>23) {
        hour = hour -24;
    }
} 
	int MyTime::seccale()  
{
	return(hour*60+minute)*60+second;
}
          
  MyTime MyTime::sub(MyTime&t)
	 {   
	 MyTime tmp;  
	 int ss;  
	 ss=abs(seccale()-t.seccale());
	    tmp.hour=ss/3600%24;  
		tmp.minute=ss%3600/60;  
		tmp.second=ss%3600%60;
		  return tmp;
		   } 
int main(){
     
    int h,m,s,a,b,c;
    cin>>h>>m>>s>>a>>b>>c;
    MyTime t1;
    t1.print_12();
    t1.print_24();
    MyTime t2(h,m,s);
    t2.print_12();
    t2.print_24();
    t1.SetTime(h,m,s);
    MyTime t3(a,b,c);
    t3.SetTime(a,b,c);          
    t1.TimeAdd(a,b,c);
    t1.print_12();
    t1.print_24();
    t2.sub(t3).print_12(); 
 	t2.sub(t3).print_24();
    return 0;
}
