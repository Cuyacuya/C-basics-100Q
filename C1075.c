#include <stdio.h>
int main(){
    char x, t='a';
    scanf("%c", &x);
    do
    {
        printf("%c ", t);
        t+=1; //t+=1; 는 t=t+1과 같은 의미이다.
    }while(t<'z'+1); //의미 : t의 값이 'z'보다 작은 동안 반복된다.
}