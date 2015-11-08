#include<stdio.h>
void Euc(int num1,int num2);
int main()
{
	int a,b;
	printf("请输入2个整数：\n");
	scanf("%d %d",&a,&b);
	Euc(a,b);
	return 0;
}
void Euc(int num1,int num2)
{
	int a[32],b[32];
	int inv_a,inv_b,temp;
	int i=0,j=0;
	a[0]=num1;
	b[0]=num2;
	while(a[i]%b[j]!=0)
	{
		printf("%d=%d*%d+%d\n",a[i],a[i]/b[j],b[j],a[i]%b[j]);
		i++;
		j++;
		a[i]=b[j-1];
		b[j]=a[i-1]%b[j-1];
	}
	printf("%d=%d*%d+%d\n",a[i],a[i]/b[j],b[j],a[i]%b[j]);

/*回代过程*/
	i--;
	j--;
	inv_a=1;
	inv_b=-a[i]/b[i];
	printf("%d\n",a[i]%b[j]);
	for(;i>=0,j>=0;i--,j--)
	{
		printf(" =%d*(%d)+%d*(%d)\n",a[i],inv_a,b[j],inv_b);
		temp=inv_a;
		inv_a=inv_b;
		inv_b=temp-a[i-1]/b[j-1]*inv_b;
	}
}
