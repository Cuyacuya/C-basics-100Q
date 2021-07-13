#include <stdio.h>
int main(){
    double d;
    scanf("%lf", &d); //float : +- 3.4*10-38 ~ +- 3.4*1038
    printf("%.11lf", d); //double : +- 1.7*10-308 ~ +- 1.7*10308
}