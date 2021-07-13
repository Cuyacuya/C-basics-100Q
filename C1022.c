#include <stdio.h>
int main(){
    char data[2001]={ };
    fgets(data,2000,stdin);
    //fgets()를 사용하면 공백문자가 포함되어잇는 문장을 입력받아 저장할 수 있다.
    printf("%s", data);
}