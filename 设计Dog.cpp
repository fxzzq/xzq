/*题目内容：
设计一个Dog类，包含name、age、sex和weight等属性以及对这些属性操作的方法。
实现并测试这个类。根据类的封装性要求，把name、age、sex和weight声明为私有
的数据成员，编写公有成员函数setdata()对数据进行初始化，GetName()、
GetAge()、GetSex()和GetWeight()获取相应属性。初始化数据由用户输入。

输入格式:
Dog类对象的初始化数据

输出格式：
根据Dog类对象的初始化数据输出一句话，请严格按照格式输出。

输入样例：
ahuang 3 m 2.4

输出样例：
It is my dog.
Its name is ahuang.
It is 3 years old.
It is male.
It is 2.4 kg.
*/
#include<iostream>
#include<cstring>
using namespace std;
class Dog{
    private:
        char name[10];
		int  age;
		char sex;
		double weight;
    public:	
	void	setdata(char n[],int m,char s,double t)
		{
			strcpy(name,n);
			age=m;
			sex=s;
			weight=t;
			cout<<"It is my dog."<<endl;
		}
		void	GetName()
		{
			cout<<"Its name is "<<name<<"."<<endl;
		}
		void GetAge()
		{
		cout<<"It is "<<age<<" years old."<<endl;
		}
		void	GetSex()
		{
			cout<<"It is "<<sex<<"ale."<<endl;

		}
		void  GetWeight()
		{
			cout<<"It is "<<weight<<" kg."<<endl;
		}
};
int main()
{
	Dog dog1;
 char sname[10];
		int  sage;
		char ssex;
		double sweight;
		cin>>sname>>sage>>ssex>>sweight;
		dog1.setdata(sname,sage,ssex,sweight);
		dog1.GetName();
		dog1.GetAge();
		dog1.GetSex();
		dog1.GetWeight();
		return 0;

}
