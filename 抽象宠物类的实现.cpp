/* 
题目内容：
定义抽象宠物类Pet，其中数据成员包括：名字，年龄和颜色；
成员函数包括：构造函数；获取成员数据值的函数；纯虚函数Speak和纯虚函数GetInfo; 
定义Pet的派生类Cat和Dog，其中Speak函数分别显示猫和狗的叫声,
而GetInfo函数分别输出Cat和Dog的属性。主函数中定义Pet指针变量，
分别指向动态生成的Cat和Dog对象，并通过指针分别调用GetInfo函数和Speak函数，观察并分析输出结果。

输入格式:
猫和狗的信息

输出格式：
请参考输出样例，严格遵照格式要求输出，建议直接复制样例中的部分文字粘贴进自己的代码中

输入样例：
mikey 2 blue
benben 1 black

输出样例：
猫的名字：mikey   / /注意 中文冒号 
猫的年龄：2
猫的颜色：blue
猫的叫声：miao!miao!
狗的名字：benben
狗的年龄：1
狗的颜色：black
狗的叫声：wang!wang!
*/ 
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class Pet
{
    public:
        char Name[10];
        int Age;
       char Color[10];
    public:
        Pet(){};//构造函数 
        void Set_info(char *name, int age, char *color)
         {  
           strcpy(Name, name);
           Age = age;
           strcpy(Color, color); 
           }
     
        virtual void Speak()=0;//纯虚函数 
        virtual void Getinfo()=0;//纯虚函数
};
 
class Dog:public Pet
{
    virtual void Getinfo(){
        cout << "狗的名字：" << Name << endl; // 注意 中文冒号 
        cout << "狗的年龄：" << Age << endl;
        cout << "狗的颜色：" << Color << endl;
    }
    virtual void Speak()
    {
        cout <<"狗的叫声："<< "wang!wang!";
    }
     
};
 
class Cat:public Pet
{
      virtual void Getinfo()
     {
        cout << "猫的名字：" << Name << endl;
        cout << "猫的年龄：" << Age << endl;
        cout << "猫的颜色：" << Color << endl;
    }
     
      virtual void Speak()
    {
    cout <<"猫的叫声："<< "miao!miao!" << endl;
    }
 
};
 
int main()
{
   char name[10];
    int age; 
	char color[10];
    Pet *mao=new Cat();//mao指向Cat的一个对象 
    Pet *gou=new Dog();//gou指向Dog的一个对象 
   cin>>name>>age>>color;
   mao->Set_info(name,age,color);
   cin>>name>>age>>color;
   gou->Set_info(name,age,color);
   system("cls");/// 清屏 
   mao->Getinfo();
   mao->Speak();
   gou->Getinfo();
   gou->Speak();
   return 0;
 } 


