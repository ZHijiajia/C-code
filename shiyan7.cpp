#include <stdio.h>
#include <math.h>       //程序中用到求平方根函数sqrt
int main()
{
   int i,j,n,a[101];     //定义a数组包含101个元素
   for(i=1;i<=100;i++)   //a[0]不用，只用a[1]~a[100]
	   a[i]=i;      //使a[1]~a[100]的值为1~100
   a[1]=0;
   for(i=2;i<sqrt(100);i++)
	   for(j=i+1;j<=100;j++)
	   {
	       if(a[i]!=0&&a[j]!=0)
			   if(a[j]%a[i]==0)
				   a[j]=0;      //把非素数"挖掉"
	   }
	   printf("\n");
	   for(i=2,n=0;i<=100;i++)
	   {
	      if(a[i]!=0)    //选出值不为0的数组元素，即素数
		  {
		     printf("%5d",a[i]);   //输出素数，宽度为5列
			 n++;     //累积本行已输出的数据个数


		  }
		  if(n==10)
		  {
		     printf("\n");
			 n=0;
		  }
	   }
printf("\n");
return 0;

}
