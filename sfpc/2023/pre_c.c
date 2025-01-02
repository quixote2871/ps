// CodeUp 2367 야채빵과 단팥빵1 https://codeup.kr/problem.php?id=2367
#include <stdio.h>

typedef struct Date { int y, m, d; } date_t;

int is_leap_year(int y) {
    return (y%4==0 && y%100!=0) || y%400==0;
}

int get_days(int y, int m) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return days[m]+(is_leap_year(y) && m==2);
}

int is_equal(date_t d1, date_t d2) {
    return d1.y==d2.y && d1.m==d2.m && d1.d==d2.d;
}

// https://en.wikipedia.org/wiki/Zeller%27s_congruence#Formula
int get_day_of_week(date_t d) {
    if(d.m<3) {
        d.m += 12;
        d.y -= 1;
    }
    int K = d.y%100;
    int J = d.y/100;
    int h = (d.d+(13*(d.m+1))/5+K+K/4+J/4-2*J)%7;
    return (h+5)%7+1;
}

date_t d1, d2;

int main()
{
    scanf("%d.%d.%d", &d1.y, &d1.m, &d1.d);
    scanf("%d.%d.%d", &d2.y, &d2.m, &d2.d);
    int ans = 0;
    while(1) {
        if(get_day_of_week(d1)==5)
            ans += d1.m+d1.d;
        if(is_equal(d1, d2))
            break;
        d1.d += 1;
        if(get_days(d1.y, d1.m)<d1.d) {
            d1.m += 1;
            d1.d = 1;
        }
        if(12<d1.m) {
            d1.y += 1;
            d1.m = 1;
        }
    }
    printf("%d %d\n", ans, ans*2);

    return 0;
}
