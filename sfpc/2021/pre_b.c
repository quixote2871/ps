// CodeUp 2314 한라봉 포장1 https://codeup.kr/problem.php?id=2314
#include <stdio.h>

int n;

int main()
{
    scanf("%d", &n);
    int box[] = {10, 5, 3, 1};
    int ans = 0;
    for(int i=0; i<4; i++) {
        ans += n/box[i];
        n %= box[i];
    }
    printf("%d\n", ans);

    return 0;
}