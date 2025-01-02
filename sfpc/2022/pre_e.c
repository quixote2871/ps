// CodeUp 2342 특산물 교환1 https://codeup.kr/problem.php?id=2342
#include <stdio.h>

int n, m;

int main()
{
    scanf("%d%d", &n, &m);
    n -= m;
    int cost[] = {500, 100, 50, 10};
    int ans = 0;
    for(int i=0; i<4; i++) {
        ans += n/cost[i];
        n %= cost[i];
    }
    printf("%d\n", ans);

    return 0;
}