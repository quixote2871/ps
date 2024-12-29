// CodeUp 2312 주차 공간1 https://codeup.kr/problem.php?id=2312
#include <stdio.h>

int n, a, b, cnt[110];

int main()
{
    scanf("%d%d%d", &n, &a, &b);
    int ai;
    for(int i=0; i<a; i++) {
        scanf("%d", &ai);
        cnt[ai] += 1;
    }
    int bi;
    for(int i=0; i<b; i++) {
        scanf("%d", &bi);
        cnt[bi] += 1;
    }
    int ans0 = 0, ans2 = 0;
    for(int i=1; i<=n; i++) {
        if(cnt[i]==0)
            ans0 += 1;
        if(cnt[i]==2)
            ans2 += 1;
    }
    printf("%d %d\n", ans0, ans2);

    return 0;
}
