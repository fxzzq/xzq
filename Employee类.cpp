#include<iostream>
#include<string>
using namespace std;
class Employee{
public:
 Employee(string n,string a,string c,string p)
 {
	  name=n;
	  adress=a;
	  city=c;
	  postcode=p;
 }
Employee(Employee &e);
void setName(char *n);
void display();
private:
 string name;
 string adress;
 string city;
 string postcode;
};
void Employee::setName(char *n)
	{
		 cin>>n;	        
		 name=n;
	}
void Employee::display()
	{
	 cout<<name<<" "<<adress<<" "<<city<<" "<<postcode<<endl;
	}
int main()
{    string n,a,c,p;
cout<<"请依次输入姓名 地址 城市 邮编："<<endl;
	 cin>>n; 
	 cin>>a;
	 cin>>c;
	 cin>>p;
	 Employee e(n,a,c,p);
	 cout<<"输出结果："<<endl;
	 e.display();
	 cout<<"修改名字："<<endl;
	 e.setName(&p[0]); 
	 cout<<"输出结果："<<endl;
	 e.display();
	 return 0;
}
