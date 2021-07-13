#include <stdio.h>
//입력이 9이내라서 쉬운듯
int main(){
    int i;
    int n;
    scanf("%X", &n);
    for(i=1;i<=n;i++){
        if(i%3==0){
            printf("X ");
        }
        else{
            printf("%d ", i);
        }
    }
    return 0;
}