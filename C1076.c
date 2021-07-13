#include <stdio.h>
int main(){
    char x, t='a';
    scanf("%c", &x);
    do
    {
        printf("%c ", t);
        t+=1; //t+=1; 는 t=t+1과 같은 의미이다.
    }while(t<x+1); //t가 x+1보다 작을때까지/ 
}