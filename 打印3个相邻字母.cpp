#include <iostream>
using namespace std;
int main()            
{ 
    char ch,ch1,ch2;
    cin >> ch;
    if (ch == 'a')
    {
        ch1 = 'z';
        ch2 = 'b';
    }
    else if (ch == 'z')
    {
        ch1 = 'y';
        ch2 = 'a';
    }
      else if (ch == 'A')
    {
        ch1 = 'Z';
        ch2 = 'B';
   }
     else if (ch =='Z')
    {
        ch1 = 'Y';
        ch2 = 'A';
    }
    else
    {
        ch1 = char((int)ch - 1);
        ch2 = char((int)ch + 1);
    }
    cout <<ch1<<ch<<ch2;
    return 0;
}
