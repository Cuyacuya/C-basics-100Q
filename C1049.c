#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a>b); //=(같다)는 안해줘도 0으로 나오네요
    //a>b 의 경우가 같다의 경우에 해당안되니 0으로 나오는듯?
    //1051번을 푼 결과 맞는듯
    return 0;
}