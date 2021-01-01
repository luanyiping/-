#include<iostream>
using namespace std;
int main()
{
	int a[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	int left = 0, right = 9;
	while (left < right)
	{
		int temp;
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;
		left++;
		right--;
	}
	for (i = 0; i < 10; i++)
	{
		cout << a[i] << "\t";
	}

}
