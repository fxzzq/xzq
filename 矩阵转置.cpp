#include<iostream>
using namespace std;
int main()
{   int t;
	int i,j;
	int n = 0,mat[4][4];
	cout<<"请输入矩阵阶数"<<endl;
	cin>>n;	
	if(n==4)
	{ 
	cout<<"请输入矩阵元素"<<endl;
	cin>>mat[0][0]>>mat[0][1]>>mat[0][2]>>mat[0][3];
	cin>>mat[1][0]>>mat[1][1]>>mat[1][2]>>mat[1][3];
	cin>>mat[2][0]>>mat[2][1]>>mat[2][2]>>mat[2][3];
	cin>>mat[3][0]>>mat[3][1]>>mat[3][2]>>mat[3][3];
	for ( i = 0; i < 3; i++)
	{
		for ( j = i; j < 4; j++)
		{
			if (j!=i)
			{
				t = mat[i][j];
				mat[i][j] = mat[j][i];
				mat[j][i]=t;
			}
		}
	}
	cout<<"转置后的矩阵为："<<endl;
	for ( i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout<<mat[i][j];
			if(((i+1)%4==0)&&((j+1)%4==0))//最后输出的数后无空格 
			{
			}
			else
				cout<<" ";
		}
	}
	} 
	else
		{
		cout<<"only handle fourth order matrix"<<endl;
	} 
	return 0;
}
