#include <stdio.h>
int main(){
int i, n;
int sum = 0;
scanf("%d", &n);
    for(i=0;i<=n;i++){
        if(i%2==0){
        sum = sum + i;
        }
    }
printf("%d", sum);
}