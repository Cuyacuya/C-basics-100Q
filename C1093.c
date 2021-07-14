#include <stdio.h>
int n, t, i;
int a[24]= { };
scanf("%d", &n); //갯수 입력받기

for(i=0;i<24;i++){ 
    scanf("%d ",&t);
    a[t]++;
}
for(i=0;i<24;i++){
    printf("%d ",a[i]);
}