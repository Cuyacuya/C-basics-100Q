#include <stdio.h>
//최소 공배수 (담엔 다른방법도 생각해보자)
int main(){
    int a,b,c,day;
    day = 1;
    scanf("%d %d %d", &a, &b, &c);
    while(day%a!=0 || day%b!=0 || day%c!=0){
        day++;
    }
    printf("%d", day);
}