#include <stdio.h>
//이중if문_성적입력
int main(){
    int score;
    scanf("%d", &score);
    if(score>=90){
        printf("A");
    }
    else if(score>=70){
        printf("B");
    }
    else if(score>=40){
        printf("C");
    }
    else if(score>=0){
        printf("D");
    }
    return 0;
}