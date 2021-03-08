#include<stdio.h>
#include<stdlib.h>

int compare(const void* p1, const void* p2)
{
	return((*(int*)p2) - (*(int*)p1));
}
int main()
{
	int a[40], n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	qsort(a, n, 4, compare);
	for (i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
}




