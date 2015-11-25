#include <iostream>
#include<cstring>
using namespace std;
class Person
{
    private: 
        char Name[20];
        int Age;
        char Sex;
    public:
        Person()
        {
            strcpy(Name,"XXX");
            Age=0;
            Sex='m';
        }
       void Register(char *name,int age,char sex);
       void ShowMe();
       ~Person()
       {
         cout<<"Now destroying the instance of Person"<<endl;
       }
};
void Person::Register(char *name,int age,char sex)
{
    strcpy(Name,name);
    Age=age;
    Sex=sex;
};
void Person::ShowMe()
{
    cout<<Name<<" "<<Age<<" "<<Sex<<endl;
};
int main()
{
    char name[20];
    int age;
    char sex;
    Person *p1,*p2;
    p1=new Person;
    p2=new Person;
    cin>>name>>age>>sex;
    cout<<"person1:";
    p1->ShowMe();
    cout<<"person2:";
    p2->ShowMe();
    p1->Register(name,age,sex);
    cout<<"person1:";
    p1->ShowMe();
    *p2=*p1;
    cout<<"person2:";
    p2->ShowMe();
    delete p1;
    delete p2;
     
    return 0;
}
