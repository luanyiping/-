#include<stdio.h>

int main(void)
{
	int n,i,j=0,k,a[1000];
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		while(1)
		{
			if(n%i==0)
			{
				a[j]=i;
				j++;
				n=n/i;
			}
			else
			break;
		}
	}

	for(k=j-1;k>=0;k--)
	{
		printf("%d ",a[k]);
	}
	
		
}



