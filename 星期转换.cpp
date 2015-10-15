#include <iostream>
using namespace std;
int main()
{   char week[7][10]={"monday","tuesday","wednesday",
				"thursday","friday","saturday","sunday"};
	int m;
	cin>>m;
	if(m>0&&m<8)
	cout<<week[m-1];
	else
	cout<<"invalid"<<endl;
	return 0;
}
	
