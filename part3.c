#include <stdio.h>
int is_happy_number(int n)
{
int sum = 0, mul = 1;
    while (n > 0)
    {
        sum += n % 10;
        mul *= n % 10;
        n /= 10;
    }
    return (sum == mul);
}
int main()
{
int n;
    scanf("%d", &n);
    is_happy_number(n) ? printf("YES")
: printf("NO");
    return 0;
}