#include <stdio.h>
int main(){
    int n, i;
    int a[1000]= {};

    scanf("%d", &n); //갯수 입력받기

    for(i=1;i<=n;i++){ 
        scanf("%d", &a[i]); //배열입력받기
    }

    for(i=n;i<0;i--){
        printf("%d ",a[i]);
    }
}