#include<iostream>
using namespace std;
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr[10][10];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int k = 0;
    scanf("%d", &k);
    int r = 0;
    for (r = 0; r < k; r++)
    {
        char t;
        int a = 0;
        int b = 0;
        scanf(" %c %d %d", &t, &a, &b);
        if (t == 'r')
        {
            for (i = 0; i < m; i++)
            {
                int tmp = arr[a - 1][i];
                arr[a - 1][i] = arr[b - 1][i];
                arr[b - 1][i] = tmp;
            }
        }
        else if (t == 'c')
        {
            for (i = 0; i < n; i++)
            {
                int tmp = arr[i][a - 1];
                arr[i][a - 1] = arr[i][b - 1];
                arr[i][b - 1] = tmp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
