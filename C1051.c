#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a<=b);
//이번엔 같다가 a<=b에 해당하므로 아닌경우에만 0출력
    return 0;
}