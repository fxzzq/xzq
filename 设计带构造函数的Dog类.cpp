/*题目内容：
设计一个Dog类，包含name、age、sex和weight等属性，
在有参数的构造函数中对数据成员进行初始化。
公有成员函数有：GetName()、GetAge()、GetSex()和GetWeight()
可获取名字、年龄、性别和体重。编写成员函数speak() 
显示狗的叫声。编写主函数，输入狗的名字、年龄、性别和体重；
声明Dog对象并用输入的数据通过构造函数初始化对象，
通过成员函数获取狗的属性并显示出来。

输入格式:
狗的信息

输出格式：
狗的信息，外加叫声

输入样例：
Tom 4 m 2.4

输出样例：
Tom
4
m
2.4
Arf!Arf!
*/
#include<iostream>
#include<cstring>
using namespace std;
class dog
{
 char name[20];
	int age;
	char sex ;
	double weight;
	public:
		dog(){
		}
	void GetName(char namen[20])
	{
		strcpy(name,namen);//字符的拷贝 
		cout<<name<<endl;
	}
	void GetAge(int agen)
	{
		age=agen;
		cout<<age<<endl;
	}
	void GetSex(char sexn)
	{
		sex=sexn;
			cout<<sex<<endl;
	}
	void GetWeight(double weightn)
	{
		weight=weightn;
			cout<<weight<<endl;
	}
	void speak()
	{
		cout<<"Arf!Arf!"<<endl;
	}
	
};
int main()
{ 
	dog dog1;
	char  a[20];
	char b;
	int c;
	double d=0;
		cin>>a;
	cin>>c>>b>>d;
	dog1.GetName(a);
	dog1.GetAge(c);
	dog1.GetSex(b);
	dog1.GetWeight(d);
	dog1.speak();
	return 0;
}
