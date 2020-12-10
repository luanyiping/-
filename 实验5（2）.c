#include<stdio.h>
#include<math.h>
float f()
{
	int n, i, sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 && i % 7 == 0)
		{
			sum = sum + i;
		}
	}
	return(sqrt(sum));
}
int main()
{
	float z = f();
	printf("%f", z);
}


