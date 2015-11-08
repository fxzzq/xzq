/*输入样例：
3 9 27 4 5 -1

输出样例：
48
*/
#include <iostream>
using namespace std;
void add(int n, int *sum)
{
    for (int i = 0; i < n; i++)
    {
        sum[i] = 0;
    }
}
int main()
{
    int a[20];
    int i = 0,j=0;
    while (j<=100)
    {
        cin >> a[i];
        if (a[i] == -1)
            break;
        i++;
        j++;
	
    }
	int n=0;
    int *sum = &a[0];//指针变量初始化
    add(n,sum);
    i = 0;
    for (int k = 0; k < j;k++)
    {
      n+=a[k];
    }
	cout<<n;
	cout<<endl;
    return 0;
}
