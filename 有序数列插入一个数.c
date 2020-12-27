#include<stdio.h>
int main()
{
	int n, a[50];
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &a[i]);
	}
	int m;
	scanf("%d", &m);
	for (i = 0; i < n; i++)
	{
		if (a[i] > m)
		{
			int k = n - 1;
			for (k = n - 1; k >= i; k--)
			{
				a[k + 1] = a[k];
			}
			a[i] = m;
			break;
		}
	}
	a[i] = m;
	for (i = 0; i < n + 1; i++)
	{
		printf("%d ", a[i]);
	}
}