#include <iostream>
using namespace std;
void clear(int n, int *p)
{
    for (int i = 0; i < n; i++)
    {
        p[i] = 0;
    }
}
int main()
{
    int a[20];
    int i = 0,j=0;
    while (1)
    {
        cin >> a[i];
        if (a[i] == -1)
            break;
        i++;
        j++;
    }
    int n;
    cin >> n;//输入清0的个数
    int *p = &a[0];//指针变量初始化
    clear(n, p);
    i = 0;
    for (int k = 0; k < j;k++)
    {
       
		if(k==0)
			cout<<a[0];
		else 
			 cout<<" "<<a[k];
    }
	cout<<endl;
    return 0;
}
