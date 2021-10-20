#include <stdio.h>
#include <string.h>

void seive(int n, int arr[])
{
    arr[2] = 0;
    arr[3] = 0;
    for (int i = 2; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                arr[j] = 1;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int arr[n + 1];
    seive(n, arr);
    printf("Prime numbers till %d are:\n ", n);
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}