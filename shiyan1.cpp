#define M 1000   //����Ѱ�ҷ�Χ
#include <stdio.h>
int main()
{
    int k1,k2,k3,k4,k5,k6,k7,k8,k9,k10;
	int i,a,n,s;
	for(a=2;a<=M;a++)    //a��2~1000��������������Ƿ�����
	{
	   n=0;   //�����ۼ�a�����ӵĸ���
	   s=a;      //s���������δ���������֮�ͣ���ʼʱ����a
	   for(i=1;i<a;i++)   //���i�Ƿ�a������
		   if(a%i==0)    //���i��a������
		   {
		      n++;    //n��1����ʾ���ҵ�һ������
			  s=s-i;   //s��ȥ���ҵ������ӣ�s����ֵ����δ���������֮��
			  switch(n)   //���ҵ������Ӹ���k1~k9,��k10
			  {
			  case 1:
				  k1=i;break;    //�ҳ��ĵ�1�����Ӹ���k1
			  case 2:
				  k1=i;break;    //�ҳ��ĵ�2�����Ӹ���k2
			  case 3:
				  k1=i;break;    //�ҳ��ĵ�3�����Ӹ���k3
			  case 4:
				  k1=i;break;    //�ҳ��ĵ�4�����Ӹ���k4
			  case 5:
				  k1=i;break;    //�ҳ��ĵ�5�����Ӹ���k5
			  case 6:
				  k1=i;break;    //�ҳ��ĵ�6�����Ӹ���k6
			  case 7:
				  k1=i;break;    //�ҳ��ĵ�7�����Ӹ���k7
			  case 8:
				  k1=i;break;    //�ҳ��ĵ�8�����Ӹ���k8
			  case 9:
				  k1=i;break;    //�ҳ��ĵ�9�����Ӹ���k9
			  case 10:
				  k1=i;break;    //�ҳ��ĵ�10�����Ӹ���k10
			  }

		   }
if(s==0)
{
   printf("%d,Its factors are",a);
   if(n>1) printf("%d,%d",k1,k2);   //n>1��ʾa������2������
   if(n>2) printf(",%d",k3);   //n>2��ʾ������3������,��Ӧ�����һ������
   if(n>3) printf(",%d",k4);   //n>3��ʾ������4������,��Ӧ�����һ������
   if(n>4) printf(",%d",k5);   //��������
   if(n>5) printf(",%d",k6);
   if(n>6) printf(",%d",k7);
   if(n>7) printf(",%d",k8);
   if(n>8) printf(",%d",k9);
   if(n>9) printf(",%d",k10);
   printf("\n");
}
	}
	return 0;
}