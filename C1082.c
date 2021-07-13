#include <stdio.h>
//잘 이해가 안돼...
int main(){
    int i;
    int n;
    scanf("%X", &n);
    for(i=1;i<16;i++){
        printf("%X*%X=%X\n", n,i,n*i);
    }
    return 0;
}