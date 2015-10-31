#include <iostream>
using namespace std;
int sort(int a[],int n);
int main()
{	int a[200];
	int x;
	int maxnum; 
	int i;
/*	cout<<"输入x:"<<endl; */ 
	cin>>x;//x为数组长度
/*	cout<<"输入各个元素:"<<endl; */
	for(i=0;i<x;i++)
		{
			cin>>a[i];//数组的所有元素 
		}
	/*	cout<<"输出最大值：\n"; */ 
    maxnum=sort(a,x);  
  cout<<maxnum<<endl;
    return 0;
}
int sort(int a[],int n)  //找数组的最大值 
{  
    int max;  
    if(n==0)  
    {  
        return a[0];  
    }  
    else  
    {  
        max=sort(a,n-1);  //递归 
        if(max<a[n-1])  
        {  
            max=a[n-1];  
              
        }  
    }  
    return max;  
}  

  
