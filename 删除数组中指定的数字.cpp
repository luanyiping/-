#include<iostream>
using namespace std;
int main()
{
	int n, i = 0, a[50];
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	int del;
	scanf_s("%d", &del);
	int j = 0;
	for(i = 0; i < n; i++)
	{
		if (a[i] != del)
		{
			a[j++] = a[i];
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", a[i]);
	}
}