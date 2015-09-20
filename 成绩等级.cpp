#include<iostream>
using namespace std;
int main()
{
	cout<<"你考了多少分？(1-100)"<<endl;
	int grade=0;
	cin>>grade;
	switch(grade/10)
	{
	    case 0:
	    case 1:
		case 2:
		case 3:
		case 4:
		case 5:cout<<"差"<<endl;break;
		case 6:
		case 7:cout<<"中"<<endl;break;
		case 8:cout<<"良"<<endl;break;
		case 9:
		case 10:cout<<"优"<<endl;break;


	}
	system("pause");
	return 0;
}

