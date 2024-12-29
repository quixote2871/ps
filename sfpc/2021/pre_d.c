// CodeUp 2318 산딸기 정렬1 https://codeup.kr/problem.php?id=2318
#include <stdio.h>

int m, a[1000010], n;

int main()
{
    scanf("%d", &m);
    for(int i=0; i<m; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    for(int i=0; i<m; i++)
        if(a[i]<n)
            printf("%d ", a[i]);
    for(int i=0; i<m; i++)
        if(a[i]==n)
            printf("%d ", a[i]);
    for(int i=0; i<m; i++)
        if(a[i]>n)
            printf("%d ", a[i]);
    printf("\n");

    return 0;
}
