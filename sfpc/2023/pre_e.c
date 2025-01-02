#include <stdio.h>

int N, P[110], M, K;

int main()
{
    scanf("%d", &N);
    for(int i=0; i<N; i++)
        scanf("%d", &P[i]);
    scanf("%d%d", &M, &K);
    int ans = 0;
    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++)
            for(int k=j+1; k<N; k++)
                if((P[i]+P[j]+P[k])*M<=K)
                    ans += 1;
    printf("%d\n", ans);

    return 0;
}
