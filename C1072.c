#include <stdio.h>
//goto명령문(반복실행)
int main(){
  int n, m;
  scanf("%d", &n);
reget: //레이블은 콜론( : ) 으로 끝난다.
  scanf("%d", &m);
  printf("%d\n", m);
  if(n--!=1) goto reget; //reget:으로 이동, n의 값 1만큼 감소
}
