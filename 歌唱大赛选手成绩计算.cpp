#include <iostream>
using namespace std;
int main()            
{ 
    int i,max,min,str[10];
	 double last;
	 for(i=0;i<10;i++)
	 {
	 cin>>str[i];
	 if(str[i]<0||str[i]>100) 
	 {
	 	cout<<"the score is invalid.";
	 	return 0;
	 }
	 }
	   max=str[0];
	    for(i=1;i<10;i++)
	    {
	    	if(str[i]>max)
	    	max=str[i];
		}
		min=str[0];
		 for(i=1;i<10;i++)
	    {
	    	if(str[i]<min)
	    	min=str[i];
		}
	 	last=(str[0]+str[1]+str[2]+str[3]+str[4]+str[5]+str[6]+str[7]+str[8]+str[9]-max-min)/8.0; 
	 	cout<<last<<endl; 
    return 0;
}
