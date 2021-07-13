#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a+b); //두수의 합
    printf("%d\n", a-b); //두수의 차
    printf("%d\n", a*b); //두수의 곱
    printf("%d\n", a/b); //두수의 목
    printf("%d\n", a%b); //두수의 나머지
    printf("%.2f\n", (float)a/b); //두수를 나눈 값
    return 0;
}