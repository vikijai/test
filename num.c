#include <stdio.h>

int main()
{
    int n, sum = 0, c, k, arr[100];
    scanf("%d %d", &n, &k);
    for (c = 0; c < n; c++)
    {
        scanf("%d ", &arr[c]);
    }
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}