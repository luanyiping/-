#include<stdio.h>
int main()
{
	int x,y,m,n;
	printf("请输入头和脚的个数:");
	scanf("%d %d",&m,&n);
	for(x=0;x<m;x++)
	{
		for(y=0;y<m;y++)
		{
			if(x+y==m&&2*x+4*y==n)
			printf("鸡有%d只,兔子有%d只",x,y);
		}
	}
}
