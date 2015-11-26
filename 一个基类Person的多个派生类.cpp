/*题目内容：
已知基类Person的定义如下：
class Person
{
protected:
char Name[10];
char Sex;
int Age;
public:
void Register(char *name,int age,char sex);
void ShowMe();
};
请通过继承的方法建立两个派生类，其中
派生类Teacher：
1．新增的数据成员有：
char Dept[20];
int Salary;
2.新增的成员函数有：
构造函数，并使用基类的Register
3.重写的成员函数有：
void ShowMe() //显示数据成员信息，并使用基类的ShowMe
派生类Student：
1．新增的数据成员有：
char ID[12];
char Class[12];
2.新增的成员函数有：
Student(char *name,int age,char sex, char *id,char *classid);
3.重写的成员函数有：
void ShowMe() //显示数据成员信息，并使用基类的ShowMe
在主程序中分别建立两个派生类对象，利用已有的成员函数分别显示两个派生类对象的数据成员。
输入格式:
教师对象的初始化参数
学生对象的初始化参数

输出格式：
请参考输出样例严格按照格式输出教师对象和学生对象的详细信息

输入样例：
章立早 38 m 电信学院 2300
李木子 22 f 02035003 能动01

输出样例：
姓名 章立早
性别 男
年龄 38
工作单位 电信学院
月薪 2300
学号 02035003
姓名 李木子
性别 女
年龄 22
班级 能动01
*/
#include<iostream>
#include<cstring>
using namespace std;
class Person
{
	char Name[20];
	char Sex;
	int Age;
public:
	void Register(char *name, int age, char sex) 
	{
		 strcpy(Name,name);//字符串处理 
		Age=age;
		Sex=sex;
	 } 
	void ShowMe()
	{
		cout<<"姓名 "<<Name<<endl;
		cout<<"性别 "<<((Sex=='m')?"男":"女")<<endl; // m f男女转换 
		cout<<"年龄 "<<Age<<endl; 
	}
};
class Teacher:public Person{    //教师类 
	public:
		void RegisterTea(char *name, int age, char sex,char *dept,int salary) 
		{
			Register(name,age,sex);
			strcpy(Dept,dept);
			Salary=salary;
		}
		void ShowTea()
		{
		cout<<"工作单位 "<<Dept<<endl;
		cout<<"月薪 "<<Salary<<endl;	
		}
	private:
	char Dept[20];
	int Salary;	
};
class Student:public Person{//学生类 
	
	public:
		void RegisterStu(char *classname, char *number, char *name, int age, char sex)
		{
			Register(name,age,sex);
		 strcpy(ClassName,classname);//字符串处理 
			strcpy(Number,number);
		} 
		void ShowStu1() 
		{
			cout<<"学号 "<<Number<<endl;
		
		}
			void ShowStu2()
			{
				
			cout<<"班级 "<<ClassName<<endl;
					
			}
		
	private:
		char Number[12];//学号 
        char ClassName[10];
			
};
int main()
{
	char name1[20],name2[20];
    char sex1,sex2;
    int  age1,age2;
    char number[12];
    char classname[10];
   	char dept[20];
	int salary;
    cin>>name1>>age1>>sex1>>dept>>salary;
    cin>>name2>>age2>>sex2>>number>>classname;
     Student stu1;
     Teacher  tea1; 
    stu1.Register(name1,age1,sex1);
    stu1.ShowMe();
    tea1.RegisterTea(name1,age1,sex1,dept,salary);
    tea1.ShowTea();
    stu1.RegisterStu(classname,number,name2,age2,sex2);
    stu1.ShowStu1();
    stu1.ShowMe();
   	stu1.ShowStu2();
    return 0;
}
