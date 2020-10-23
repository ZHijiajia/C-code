#include <stdio.h>
#include <math.h>
int main(){
    int sign=1,count=0;
	                   //sign用来表示数值的符号，count用来累计循环次数
	double pi=0.0,n=1.0,term=1.0;   //pi开始代表多项式的值，最后代表π的值，n代表分母，
	                                //term代表当前项的值
	while(fabs(term)>=1e-6)     //检查当前项term的绝对值是否大于或等于10的（-6）次方
	{
	     pi=pi+term;    //把当前项term累加到pi中
		 n=n+2;   //n+2是下一项的分母
		 sign=-sign;   //sign代表符号，下一项的符号与上一项符号相反
		 term=sign/n;   //求出下一项的值term
		 count++;    //count累加1
	}
	pi=pi*4;    //多项式的和乘以4，才是π的近似值
	printf("pi=%10.8f\n",pi);   //输出π的近似值

	printf("count=%d\n",count); //输出count的值
	return 0;
}