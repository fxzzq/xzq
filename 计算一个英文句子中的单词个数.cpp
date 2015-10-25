#include <iostream>
#include<cstring>
using namespace std; 
int main(void)
{ 
   int i,ws; 
    char w[500];
	gets(w);
	for(ws=i=0;w[i];i++) 
		if(isalpha(w[i]) && (i==0 || !isalpha(w[i-1]))) 
         ws++; 
    cout <<ws<< endl; 
    return 0; 
}
