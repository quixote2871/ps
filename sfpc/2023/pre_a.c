#include <stdio.h>

int k, n, p, c, cnt[10];

int main()
{
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++) {
        scanf("%d", &p);
        for(int j=0; j<p; j++) {
            scanf("%d", &c);
            cnt[c] += 1;
        }
    }
    int cost[] = {0, 1000, 1000, 2000, 3000, 3000, 6000, 6000};
    int ans = 0;
    for(int i=1; i<=7; i++)
        if(cnt[i]>=k)
            ans += cost[i];
    printf("%d\n", ans*n);

    return 0;
}
