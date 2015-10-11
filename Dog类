#include <iostream>
using namespace std; 
class Dog
{
public:
void  dog1(int initialAge=0,int initialWeight=0);
int GetAge()
 { return itsAge;}
void SetAge (int age) 
{ itsAge = age;} 
int GetWeight()
 { return itsWeight;} 
void SetWeight (int weight) 
{ itsWeight = weight;} 
private:
int itsAge,itsWeight;
};
void Dog::dog1(int initialAge,int initialWeight)
{
itsAge = initialAge;
itsWeight = initialWeight;
}

int main()
{
	Dog jack;
	jack.dog1(2,10);
cout << "jack is a Dog who is " ;
cout << jack.GetAge() << " years old and";
cout <<" "<<jack.GetWeight() << " pounds weight.\n";
cout << "Now Jack is ";
jack.SetAge(7);
cout << jack.GetAge() << " years old and";
jack.SetWeight (20) ;
cout <<" "<< jack.GetWeight() << " pounds weight.\n";
return 0;
}
