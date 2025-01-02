#include <stdio.h>

int a, b, c;

int min(int a, int b) { return a<b?a:b; }

int main()
{
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", min(min(a/40, b/50), c/30));

    return 0;
}
