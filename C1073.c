#include <stdio.h>
//(반복실행)
int main(){
  int n = 1;
  while(1){
    scanf("%d", &n);
    if(n==0)break;
    else{
    printf("%d\n", n);
  }
  }
  return 0;
}
