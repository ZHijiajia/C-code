#include <stdio.h>
int main()
{
	char i,j,k;    //i是a的对手;j是b的对手;k是c的对手
	for(i='x';i<='z';i++)
		for(j='x';j<='z';j++)
			if(i!=j)
				for(k='x';k<='z';k++)
					if(i!=k&&j!=k)
						if(i!='X'&&k!='X'&&k!='z')
							printf("A--%c\nB--%c\nC--%c\n",i,j,k);
						return 0;
}