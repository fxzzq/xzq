#include<iostream> 
using namespace std;  
int imax(int array[],int count);//求整型数组的最大元素
int imin(int array[],int count);//求整型数组的最小元素
int main()  
{ 
	int num[40],n,i;  
	cout<<"请输入您要输入的整数个数，不超过个："; 
	cin>>n;  
	cout<<"请输入每个整数：\n";  
	for(i=0;i<n;i++)//循环输入参与判断的整数
	cin>>num[i];  
	cout<<"最大值为："<<imax(num,n)<<endl; 
	cout<<"最小值为："<<imin(num,n)<<endl; 
	return 0;  
} 
int imax(int array[],int count) 
{ 
	int m=array[0];//将最大值的初始值定义为array[0] 
	for(int i=1;i<count;i++)//循环比较m与array[i]的大小
	{ 
		if(array[i]>m) 
		m=array[i];  
	}  
  return m;//返回最大值
}
int imin(int array[],int count) 
{ 
	int l=array[0];  
	for(int i=1;i<count;i++) 
	{ 
		if(array[i]<l) 
	    l=array[i]; 
	}  
	return l;  
}  
