#include <stdio.h>
//goto명령문(반복실행)
int main(){
    int a;
reload: 
    scanf("%d", &a);
    if(a!=0){
    printf("%d\n", a);
    goto reload; //reload라고 적힌 레이블로 이동 후 실행.
    }
    return 0;
}