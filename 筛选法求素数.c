#define  CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main2()
{
	int a[101], n, i = 0, count = 0;
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++)
	{
		a[i] = i;
	}
	for (i = 2; i <= n; i++)
	{
		int j = i + 1;
		for (j = i + 1; j <= n; j++)
		{
			if (a[j] % i == 0)
			{
				a[j] = 0;
			}
		}
	}
	for (i = 2; i <= n; i++)
	{
		if (a[i] != 0)
		{
			printf("%d ", a[i]);
		}
		else
			count++;
	}
	printf("\n%d", count);
}