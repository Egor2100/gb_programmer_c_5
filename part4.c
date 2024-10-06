#include <stdio.h>
int sum1toN(int N)
{
int res = 0;
    for (int i = 1; i <= N; i++)
    res += i;
    return res;
}
int main()
{
int n;
    scanf("%d", &n);
    printf("%d", sum1toN(n));
    return 0;
}