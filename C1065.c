#include <stdio.h>
//if문
int main(){
    int a[3] = { };
    int i;
    for(i=0;i<3;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<3;i++){
        if(a[i]%2==0){
            printf("%d\n", a[i]);
        }
    }
}