/*题目内容：
设计一个Person类，包含name、age、sex属性以及对这些属性操作的方法。
实现并测试这个类。根据类的封装性要求，把name、age、sex声明为私有
的数据成员，声明公有的成员函数Register()、ShowMe()来访问这些属性，
在Register()函数中对数据成员进行初始化。person1通过cin来得到信息，
person2通过Register("Zhang3", 19, 'm') 来得到信息。
输入格式:
person1的信息

输出格式：
person1和person2的信息

输入样例：
Li4 18 f

输出样例：
Li4 18 f
Zhang3 19 m
*/
/*
#include<iostream>
using namespace std;
class Person
{
	public:
		void Register(char x[30]="hello",int y,char z[30]="hello")
	{
		name[30]=x[30];
		age=y;
		sex[30]=z[30];
	}
	void ShowMe()
	{
		cout<<name<<" "<<age<<" "<<sex<<endl;
	}

	private:
	char name[30];
	int age;
	char sex[30];
};
int main()
{
	char a[30];
	int b;
	char c[30];
	Person Person1;
	Person Person2;
	cin>>a>>b>>c;
	Person1.Register(a[30],b,c[30]);
	Person1.ShowMe();
	Person2.Register("Zhang3", 19, 'm');
	Person2.ShowMe();
	return 0;
}
*/
#include<iostream>
#include<cstring>
using namespace std;
class Person{
	private:
		int age;
		char name[10];
		char sex;
	public:
		void Register(char n[],int a,char s);
		void ShowMe()
		{
			cout<<name<<" "<<age<<" "<<sex<<endl;
		}
};
void Person::Register(char n[],int a,char s)
{
	strcpy(name,n);//把n复制到name中
	age=a;
	sex=s;
}
int main()
{
	Person person1,person2;
	int a;
	char n[10],s;
	cin>>n>>a>>s;
	person1.Register(n,a,s);
	person1.ShowMe();
	person2.Register("Zhang3",19,'m');
	person2.ShowMe();
	return 0;
}
