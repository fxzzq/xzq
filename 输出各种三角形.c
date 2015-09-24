#include<stdio.h> 
int main()
{ 
 int a,b,c; 
 scanf("%d%d%d",&a,&b,&c); 
 if(a+b<=c||a+c<=b||b+c<=a)//先输出先输出不是三角形的情形，剩下的就是是三角形的特殊情况。
	 printf("non-triangle.\n");
 else if((a==b)&&(a==c)&&(b==c))
 printf("equilateral triangle.\n");  
 else if((a==b)||(a==c)||(b==c))
 printf("isoceles triangle.\n");  
 else   printf("triangle.\n");
 return 0; 
}
