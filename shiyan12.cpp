#include <stdio.h>
int main()
{
   int a[15][15],i,j,k,p,n;
   p=1;
   while(p==1)
   {
       printf("enter n(n=1--15):");    //要求阶数为1~15的奇数
	   scanf("%d",&n);
	   if((n!=0)&&(n<=15)&&(n%2!=0))
		   p=0;
   }
   //初始化
   for(i=1;i<=n;i++)
	   for(j=1;j<=n;j++)
		   a[i][j]=0;+++
		   //建立魔方阵
		   j=n/2+1;
	   a[1][j]=1;
	   for(k=2;k<=n*n;k++)
	   {
	      i=i-1;
		  j=j+1;
		  if((i<1)&&(j>n))
		  {
		     i=i+2;
			 j=j-1;
		  }
		  else
		  {
		     if(i<1) i=n;
			 if(j>n) j=1;

		  }
		  if(a[i][j]==0)
			  a[i][j]=k;
		  else
		  {
		    i=i+2;
			j=j-1;
			a[i][j]=k;

		  }
	   }
	   //输出魔方阵
	   for(i=1;i<=n;i++)
	   {
	      for(j=1;j<=n;j++)
			  printf("%5d",a[i][j]);
		  printf("\n");
	   }
	   return 0;
}