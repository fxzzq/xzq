#include<iostream> 
using namespace std;
int fun(int n) ;
int main() 
{ 
int i; 
	for(i=1;i<=20;i++) 
	{ 
	cout<<"   "<<fun(i);
	if(i%5==0)
	cout<<endl;
    } 
}
int fun(int n) 
{ 
if(n==1||n==2)
return 1; 
if(n>2)
return (fun(n-1)+fun(n-2)); 
} 
