#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
  char c;
   cin>>c;
   (c>='a'&&c<='z') ? c=c+'B'-'b' : c;
   cout<<c<<endl;
   return 0;
}
