// CodeUp 2338 청송 황금 사과2 https://codeup.kr/problem.php?id=2338
#include <stdio.h>

struct Date {
    int y, m, d;
} d;

int k, n, m;

int is_leap_year(int y) {
    return (y%4==0 && y%100!=0) || y%400==0;
}

int main()
{
    scanf("%d%d%d", &k, &n, &m);
    d.y = 2023, d.m = 1, d.d = 1;
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day = 0, acnt = 0, pcnt = 0;
    while(1) {
        if(day%2==0) {
            if(acnt+pcnt>=k)
                break;
            acnt += n;
        }
        if(day%3==0)
            pcnt += m;
        day += 1;
        d.d += 1;
        if(days[d.m]+(is_leap_year(d.y) && d.m==2)<d.d) {
            d.m += 1;
            d.d = 1;
        }
        if(12<d.m) {
            d.y += 1;
            d.m = 1;
        }
    }
    printf("%04d/%02d/%02d\n", d.y, d.m, d.d);

    return 0;
}
