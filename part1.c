#include <stdio.h>
unsigned long long int get_grains(int n)
{
unsigned long long res = 1;
    for (int i = 2; i <= n; i++)
    res *= 2;
return res;
}
int main()
{
int n;
    scanf("%d", &n);
    printf("%llu", get_grains(n));
    return 0;
}