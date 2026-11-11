#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    /* TODO */
     if (n < 0)
    {
        printf("NG");
    }
    else
    {
        long long total = 0;

        for (long long i = 1; i <= n; i += 2)
        {
            total += i;
        }

        printf("%lld", total);
    }

    return 0;
}
