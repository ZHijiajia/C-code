#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,min,temp,a[11];
	printf("enter data:\n");
	for(i=1;i<=10;i++)
	{
	    printf("a[%d]=",i);
		scanf("%d",&a[i]);   //����10����
	}
	printf("\n");
	printf("The orginal numbers:\n");
	for(i=1;i<=10;i++)
		printf("%5d",a[i]);   //�����10����
	printf("\n");
	for(i=1;i<=9;i++)   //����8���Ƕ�10��������
	{
	    min=i;
		for(j=i+1;j<=10;j++)
			if(a[min]>a[j]) min=j;
			temp=a[i];    //����3�н�a[i+1]~a[10]�е���Сֵ��a[i]�Ի�
			a[i]=a[min];
			a[min]=temp;
	}
	printf("\nThe sorted numbers:\n");    //������ź����10����
	for(i=1;i<=10;i++)
	   printf("%5d",a[i]);
	   printf("\n");
	   return 0;
	}
