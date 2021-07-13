#include <stdio.h>
//이중if문
int main(){
    int a;
    scanf("%d", &a);
    if(a<0){
        if(a%2==0){
            printf("minus\n");
            printf("%s\n", "even");
        }
        else{
            printf("minus\n");
            printf("%s\n", "odd"); 
        }
    }
    if(a>0){
        if(a%2==0){
            printf("plus\n");
            printf("%s\n", "even");
        }
        else{
            printf("plus\n");
            printf("%s\n", "odd");
        }
    }
}