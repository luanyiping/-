#include<stdio.h>
int main()
{
	int x,y,m,n;
	printf("������ͷ�ͽŵĸ���:");
	scanf("%d %d",&m,&n);
	for(x=0;x<m;x++)
	{
		for(y=0;y<m;y++)
		{
			if(x+y==m&&2*x+4*y==n)
			printf("����%dֻ,������%dֻ",x,y);
		}
	}
}
