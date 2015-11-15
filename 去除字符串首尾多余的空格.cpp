#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
void  Fspace(char *s)    ;
void  Bspace(char *s);
int main()
{
char str[100];
    int m,i=0,len,*p;
    cin.getline(str,100);
    Fspace(str);
    Bspace(str);
    cout<<str;
    return 0;  
}
void  Fspace(char *s)    
{
    int len,p=0,k=0;
    while(s[p]==' ')
    {
        p++;        
    }
    while(s[k]!='\0')
    {
        s[k++] = s[p++];      
    }   
}
void  Bspace(char *s)    
{
    int p=0,k=0,len1,len;
    len=strlen(s);
    len1=len-1;
    while(s[len1-1]==' ')
    {
        s[len1-1]=s[len-1];
        len1--; len--;
    }
    s[len]='\0';
    return;
}
