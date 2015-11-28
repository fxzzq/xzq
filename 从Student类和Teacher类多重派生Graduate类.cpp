/* 
题目内容：
已知基类Person定义如下：
class Person
{
char Name[10];
int Sex;
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
Teacher(char *name,int age,char sex,char *dept,int salary);
void Show() //显示新增数据成员
派生类Student：
1．新增的数据成员有：
char ID[12];
char Class[12];
2.新增的成员函数有：
Student(char *name,int age,char sex,char *ID,char *Class);
void Show()//显示新增数据成员
请通过继承的方法从Teacher和Student中建立派生类Graduate，其中
1.新增的成员函数有：
Graduate(char *name,int age,char sex,char *dept,int salary,char *id,char *classid);
2.重写的成员函数有：
void ShowMe()//显示数据成员，要求调用基类的Show和ShowMe
在主程序中建立一个派生类Graduate的对象，利用成员函数显示对象的数据成员。

输入格式:
Graduate对象的初始化信息

输出格式：
按照输出样例格式输出Graduate对象的信息

输入样例：
李木子 22 f 电信学院 2300 04035003 硕401

输出样例：
班级 硕401
学号 04035003
姓名 李木子
性别 女
年龄 22
工作单位 电信学院
月薪 2300
*/ 
#include<iostream>
#include<cstring> 
using namespace std;
class Person
{
char Name[10];
int Sex;
int Age;
public:
void Register(char *name,int age,char sex)
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
class Teacher:virtual public Person{//虚基类 
	public:
		void Teacher1(char *name,int age,char sex,char *dept,int salary)
		{
			Register(name,age,sex);
			strcpy(Dept,dept);
			Salary=salary;
		}
		void Show1() //显示新增数据成员
		{
			cout<<"工作单位 "<<Dept<<endl;
			cout<<"月薪 "<<Salary<<endl;
		}
	private:
		char Dept[20];
		int Salary;
};
class Student:virtual public Person{//虚基类 
	public:
		void Student1(char *name,int age,char sex,char *id,char *classname)
		{
				Register(name,age,sex);
		 		strcpy(Class,classname);//字符串处理 
				strcpy(ID,id);
		} 
		void Show2()//显示新增数据成员
		{
			cout<<"班级 "<<Class<<endl;
			cout<<"学号 "<<ID<<endl;
		}
	private:
		char ID[12];
		char Class[12];
};
class Graduate: public Teacher ,public Student{
	public: 
	void Graduate1(char *name,int age,char sex,char *dept,int salary,char *id,char *classname)
	{
		Teacher1(name,age,sex,dept,salary);
		Student1(name,age,sex,id,classname);
	}
};
int main()
{
	char name1[20];
    char sex1;
    int  age1;
    char id[12];
    char classname[10];
   	char dept[20];
	int salary;
    cin>>name1>>age1>>sex1>>dept>>salary>>id>>classname;
    Graduate gradu1;
    gradu1.Register(name1,age1,sex1);
    gradu1.Graduate1(name1,age1,sex1,dept,salary,id,classname);
    gradu1.Show2();
    gradu1.ShowMe();
    gradu1.Show1();
	return 0;
 } 
