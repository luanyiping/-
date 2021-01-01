#include<iostream>
using namespace std;
int main()
{
	int i = 0, n, flag1 = 0, flag2 = 0;
	int a[50];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < n - 1; i++)
	{
		if (a[i] >= a[i + 1])
			flag1 = 1;
		if (a[i] < a[i + 1])
			flag2 = 1;
	}
	if (flag1 + flag2 == 1)
	{
		cout << "sorted";
	}
	else
		cout << "unsorted";
}
