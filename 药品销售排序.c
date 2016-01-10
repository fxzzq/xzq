#include<stdio.h>
#include<string.h>
int number[100];
char  name[100];
double jiage[100];
int n;
char m;
double t;
int flag;
int i=0,j=0,count=0;//计数
int  main()
{jiage[0]=1;
 printf("Input Node<No Name Price>:\n");
 while(1)
 {
       scanf("%d%s%lf",&number[i],&name[i],&jiage[i]);//double 要用lf

		count++;//计数   
		if(jiage[i]<0){
			
			break;
		}
		
		i++;
 }  
 	printf("Output:\n");
 for(i=0;i<count;i++)
 {
    if (count>1&&jiage[i]<=0)
    {	flag=1;
    	break;
	}
	else if( count==1&&jiage[i]<=0)
    {
	printf("Don't have data.\n"); 
	flag=-1;
	break;
    }
			
 }
if(flag!=-1)
{
	printf("No.\tName\tPrice\n");
	for(j=0;j<count-2;j++)
		for(i=0;i<count-2-j;i++)
			if(jiage[i]<jiage[i+1])
			{
					t=jiage[i]; n=number[i];m=name[i];
					jiage[i]=jiage[i+1];number[i]=number[i+1];name[i]=name[i+1];
					jiage[i+1]=t;number[i+1]=n;name[i+1]=m;
			}
			for(i=0;i<count-1;i++)
				printf("%d\t%c\t%6lf\n",number[i],name[i],jiage[i]);//double 要用lf
			
}
 }



	
