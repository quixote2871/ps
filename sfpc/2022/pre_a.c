// CodeUp 2333 경상북도 시군 이름1 https://codeup.kr/problem.php?id=2333
#include <stdio.h>
#include <string.h>

char s1[20], s2[20];

int main()
{
    scanf(" %s %s", s1, s2);
    int l1 = strlen(s1), l2 = strlen(s2);
    int flag;
    for(int i=0; i<l1-l2+1; i++) {
        flag = 1;
        for(int j=0; j<l2; j++) {
            if(s1[i+j]!=s2[j]) {
                flag = 0;
                break;
            }
        }
        if(flag==1)
            break;
    }
    printf("%c\n", flag==1?'O':'X');

    return 0;
}
