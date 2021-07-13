#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", a+b+c); //세수의 합
    printf("%.1f\n", (float)(a+b+c)/3); //세수의 평균
    return 0;
}