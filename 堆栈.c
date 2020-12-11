#include<stdio.h>
int main()
{
    int i, j;
    for (i = 10000; i <= 99999; i++)
    {
        int sum = 0;
        int temp = i;
        for (j = 10; j <= 10000; j *= 10)
        {
            sum += (temp % j) * (temp / j);
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
}