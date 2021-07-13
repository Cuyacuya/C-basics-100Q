#include <stdio.h>
//삼항연산자_3개의 정수비교
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d",(a<b?a:b)<c?(a<b?a:b):c);
}