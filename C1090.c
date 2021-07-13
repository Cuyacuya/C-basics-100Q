#include <stdio.h>
int main(){
    long long int a, r, n, k = 1; //10 10 10 일때 int의 범위를 벗어남.
    scanf("%llf %llf %llf",&a, &r, &n);
    for(int i=0;i<n-1;i++){
        k = k*r;
    }
    printf("%llf", a*k);
}