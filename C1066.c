'#include <stdio.h>
//if문
int main(){
    int a[3] = { };
    int i;
    for(i=0;i<3;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<3;i++){
        if(a[i]%2==0){
            printf("%s\n", "even");
        }
        else if(a[i]%1==0){
            printf("%s\n", "odd");
        }
    }
}'