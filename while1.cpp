#include <stdio.h>
#include <math.h>
int main(){
    int sign=1,count=0;
	                   //sign������ʾ��ֵ�ķ��ţ�count�����ۼ�ѭ������
	double pi=0.0,n=1.0,term=1.0;   //pi��ʼ�������ʽ��ֵ��������е�ֵ��n�����ĸ��
	                                //term����ǰ���ֵ
	while(fabs(term)>=1e-6)     //��鵱ǰ��term�ľ���ֵ�Ƿ���ڻ����10�ģ�-6���η�
	{
	     pi=pi+term;    //�ѵ�ǰ��term�ۼӵ�pi��
		 n=n+2;   //n+2����һ��ķ�ĸ
		 sign=-sign;   //sign������ţ���һ��ķ�������һ������෴
		 term=sign/n;   //�����һ���ֵterm
		 count++;    //count�ۼ�1
	}
	pi=pi*4;    //����ʽ�ĺͳ���4�����ǦеĽ���ֵ
	printf("pi=%10.8f\n",pi);   //����еĽ���ֵ

	printf("count=%d\n",count); //���count��ֵ
	return 0;
}