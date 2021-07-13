#include <stdio.h>
int main(){
    unsigned int n;
    scanf("%u", &n); //unsigned int : 0 ~ 4294967295
    printf("%u", n); //int : -2147483648 ~ 2147483647
}