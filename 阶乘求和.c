#include<stdio.h>
int main1()
{
	int a = 1, n, i = 1;
	long long sum = 0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a = a * i;
		sum = sum + a;
	}
	printf("%lld", sum);


}