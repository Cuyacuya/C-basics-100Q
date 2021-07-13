#include <stdio.h>
int main(){
    int year,mouth,day;
    scanf("%d.%d.%d", &year, &mouth, &day);
    printf("%02d-%02d-%04d", day, mouth, year);
}