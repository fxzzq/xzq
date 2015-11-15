#include<iostream>
using namespace std;
char* NumberToString( int n);
int  main()
{
	int n;
	cin>>n;
	NumberToString(n);
	return 0;
}
char* NumberToString( int n)
{
	if(n < 1 || n > 12)
	return 0;
	else
		{
			 char* map[12] = {"one","two","three","four","five", "six",
								   "seven","eight","nine","ten","eleven","twelve"};
			cout<<map[n - 1];
			
		}
 }
