#include <stdio.h>

long long int n;

int main()
{
    scanf("%lld", &n);
    printf("%lld %lld\n", n/5+(n%5!=0), n/5*150000);

    return 0;
}
