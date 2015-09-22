#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include<conio.h> 
#define N 256
#define	Q 256
FILE *fp;
struct Xuesheng
{
  int arr[Q][N];  
}stu;
void read();
void write();
int main()
{	
	int i;
	int arr[N][N];
    int j;
	int k;
    int n;
	 int a[1000];  
	int A;
	int s;	

	
	system("color 5e");

	printf("程序加载中\n");
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	printf(">");
	_sleep(10);
	_sleep(10);
	printf(">加载成功！\n");
	for(i=0;i<=39;i++)
			printf("★");
		printf("\n");
 
		printf("★                         欢迎进入魔方矩阵                                   ★\n");
		printf("★                               菜单                                         ★\n");
		printf("★                                                                            ★\n");
		printf("★1.开始                                                                      ★\n");
		printf("★2.退出                                                                      ★\n");
		printf("★                                                                            ★\n");
		printf("★                                                                            ★\n");
		printf("★                             xzq作品                                        ★\n");
		for(i=0;i<=39;i++)
			printf("★");
		printf("\n");
 
 
		printf("请选择你想要功能的序号，按回车确认:\n");
		scanf("%d",&A);
while(A==1)
{	system("cls");
loop1:
	printf("★ 请输入N（奇数阶）★ ");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("★ 输入的N不合法!★ \n");
	system("pause");
		goto loop1;

	}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			arr[i][j]=0;//使ar的所用元素为0；
		j=n/2+1;
		arr[1][j]=1;
		for(k=2;k<=n*n;k++)
		{             
			i=i-1;
			j=j+1;       // 通常情况下，下一个数放置情况。
			if((i<1)&&(j>n))//行列均超界。
			{
				i=i+2;
				j=j-1;
			}
			else
			{
				if(i<1)//如果上一数的行数是1，
					i=n;//就等于最后一行。
				if(j>n)//如果上一数的列数十
					j=1;
			}
			if(arr[i][j]==0)//如果没有填充数据，
				arr[i][j]=k;
			else           //如果这这个位置填充了数据。
			{
				i=i+2;
				j=j-1;
				arr[i][j]=k;
			}
		}
		for(i=1;i<=n;i++)	//输出魔方矩阵
		{
			for(j=1;j<=n;j++)
			{
				printf("%4d",arr[i][j]);
			
			}
			printf("\n");
		}
		printf("★ 其中水仙花数★ \n");
		if(k<100)
		{
		printf("1\n");
		}
		else if(k>100)
		{ 
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				int p,q,r;
				p=(arr[i][j])/100;
				q=((arr[i][j])-p*100)/10;
				r=((arr[i][j])-p*100-q*10);
				if(arr[i][j]==(p*p*p+q*q*q+r*r*r))
				{
					printf("%d\t",arr[i][j]);
				}
			}
		}
		}
		printf("\n★ 其中素数★ \n"); 
    for (i=1;i<=n*n;i++) 

	a[i]=i; 
	a[1]=0;  
	for (i=2;i<sqrt(1000);i++) 
	for (j=i+1;j<=n*n;j++) 
	{
		if(a[i]!=0 && a[j]!=0) 
	   if (a[j]%a[i]==0) 
	   a[j]=0; 
	} 
	for (i=2,k=0;i<=n*n;i++) 
	{
		if(a[i]!=0) 
	{
			printf("%d\t",a[i]); 
			k++; 
	}  
		if(k==10)  

		{	
			printf("\n"); 
	     	k=0;
		} 
	}
         printf("\n"); 
		printf("\n★ 1.保存矩阵★ \n★ 2.载入矩阵★ \n★ 3.退出程序★ \n");
			scanf("%d",&s);
		if(s == 3);
		else if(s == 1)
			write();
		else if(s == 2)
			read();
		printf("程序结束中>");
		_sleep(100);
		printf(">");
		_sleep(10);
		printf(">");
		_sleep(10);					
		printf(">");
	    _sleep(10);
		printf(">");
		_sleep(10);
	    printf(">");
		_sleep(10);
		printf(">");
		_sleep(10);
		printf(">");
		_sleep(10);
		printf(">程序结束成功！\n");
		return 0;
}

}
void read()
{
	if((fp=fopen("矩阵.bin","r"))==NULL)
    {
        printf("没有找到文件!\n");
		exit(0);
    }
 
    fread(&stu, sizeof(struct Xuesheng), 1, fp);

 
    fclose(fp);
}

void write()
{
    
    if((fp = fopen("矩阵.bin","w+")) == NULL)
    {
        printf("没有找到文件!\n");
		_sleep(1000);
		goto loop1;
    }
	
    fwrite(&stu, sizeof(struct Xuesheng), 1, fp);
	printf("保存成功!\n");
loop1:
    fclose(fp);
	system("pause");
    system("cls");  
}
