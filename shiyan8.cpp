#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,min,temp,a[11];
	printf("enter data:\n");
	for(i=1;i<=10;i++)
	{
	    printf("a[%d]=",i);
		scanf("%d",&a[i]);   //输入10个数
	}
	printf("\n");
	printf("The orginal numbers:\n");
	for(i=1;i<=10;i++)
		printf("%5d",a[i]);   //输出这10个数
	printf("\n");
	for(i=1;i<=9;i++)   //以下8行是对10个数排序
	{
	    min=i;
		for(j=i+1;j<=10;j++)
			if(a[min]>a[j]) min=j;
			temp=a[i];    //以下3行将a[i+1]~a[10]中的最小值与a[i]对换
			a[i]=a[min];
			a[min]=temp;
	}
	printf("\nThe sorted numbers:\n");    //输出已排好序的10个数
	for(i=1;i<=10;i++)
	   printf("%5d",a[i]);
	   printf("\n");
	   return 0;
	}
