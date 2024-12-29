// CodeUp 2316 약수 배수 놀이1 https://codeup.kr/problem.php?id=2316
#include <stdio.h>

int n, m, v, is_prime[10000010];

int count_divisor(int v) {
    int res = 1;
    for(int i=2; v>1; i++) {
        if(is_prime[v]!=0) {
            res *= 2;
            break;
        }
        if(is_prime[i]!=0) {
            int cnt = 0;
            while(v%i==0) {
                v /= i;
                cnt += 1;
            }
            res *= cnt+1;
        }
    }
    return res;
}

void set_primes(int n) {
    for(int i=2; i<=n; i++)
        is_prime[i] = i;
    for(int i=2; i<=n; i++)
        if(is_prime[i]!=0)
            for(int j=i*2; j<=n; j+=i)
                is_prime[j] = 0;
    return;
}

int main()
{
    scanf("%d%d", &n, &m);
    set_primes(m);
    for(int i=0; i<n; i++) {
        scanf("%d", &v);
        printf("%d\n", m/v+count_divisor(v)-1);
    }

    return 0;
}
