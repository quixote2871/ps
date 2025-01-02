// CodeUp 2340 독도 새우잡이1 https://codeup.kr/problem.php?id=2340
#include <stdio.h>
#define INF 12345678

int n, m, d[4], DT[100010];

int main()
{
    scanf("%d%d", &n, &m);
    for(int i=0; i<3; i++)
        scanf("%d", &d[i]);
    n -= m;
    for(int i=0; i<=n; i++)
        DT[i] = INF;
    for(int i=0; i<3; i++)
        DT[d[i]] = 1;
    for(int i=0; i<=n; i++)
        for(int j=0; j<3; j++)
            if(i-d[j]>=0 && DT[i]>DT[i-d[j]]+1)
                DT[i] = DT[i-d[j]]+1;
    printf("%d\n", DT[n]==INF?-1:DT[n]);

    return 0;
}
