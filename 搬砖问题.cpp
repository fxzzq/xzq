#include<iostream> 
using namespace std; 
int main() 
{ 
    int men,women,children,flag=0; 
    int  n;
    cin >> n; 
    for (men = 0; men <= n; men++)
      for(women=0;women<=n;women++) 
    { 
	   children=n-men-women; 
     if(4*men+3*women+children/2==n && children%2==0) 
     {
        cout << "men" << men << endl << "women" << women << endl << "children" << children<<endl;
		flag++;
		}
   } 
   if(flag==0)
   {
      cout<<"no result!"<<endl; 

   }
    return 0; 
} 
