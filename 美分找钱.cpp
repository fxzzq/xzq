#include <iostream>  
#include <cmath>  
using namespace std;  
int main()  
{  
   int i,j,k,p;  
   int n,count=0;  
    cin>>n;  
    if(n<0 || n>99)  
       cout<<"the money is invalid!"<<endl;  
    else  
    {  
        for(i=0;i<=n/25;i++)  
        {  
            for(j=0;j<=n/10;j++)  
            {  
              for(k=0;k<=n/5;k++)  
               {  
                  for(p=0;p<=n;p++)  
                   {  
                       if(25*i+10*j+5*k+p==n)  
                          count++;  
                   }  
                }  
           }  
       }  
        cout<<count<<endl;  
    }  
   return 0;  
}  
