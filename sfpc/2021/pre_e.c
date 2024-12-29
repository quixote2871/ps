// CodeUp 2320 감귤 나무 관리1 https://codeup.kr/problem.php?id=2320
#include <stdio.h>
#define INT long long int

int a, b, r, c, d;

void solve(INT a, INT b, INT c) {
    if(a*a+b*b==c*c)
        puts("on");
    else if(a*a+b*b>c*c)
        puts("out");
    else
        puts("in");
}

int main()
{
    scanf("%d%d%d%d%d", &a, &b, &r, &c, &d);
    solve(c-a, d-b, r);

    return 0;
}