#include<stdio.h>
int main()
{
	int n, i = 0, count1 = 0, count2 = 0;
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		if (a[i] > a[i + 1])
			count1++;
		else
			count2++;
	}
	if (count1 == n - 1 || count2 == n - 1)
		printf("sorted");
	else
		printf("unsorted");
}



