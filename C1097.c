#include <stdio.h>
int main(){
    int n, i, j, x, y;
    int a[20][20] = {};

    for(i=1;i<20;i++){
        for(j=1;j<20;j++){
            scanf("%d", &a[x][y]);
        }
    }
    scanf("%d", &n); //십자 뒤집기 횟수

//이런생각은 어떻게 한담.. 신기하네
    for(i=0;i<n;i++){
        scanf("%d %d", &x, &y);
        for(j=0;j<20;j++){
            if(a[x][j]==0){ //가로 줄 변경
                a[x][j]=1;
            }
            else{
                a[x][j]=0;
            }
        }
        for(j=0;j<20;j++){ //세로 줄 변경
            if(a[j][y]==0){
                a[j][y]=1;
            }
            else{
                a[j][y]=0;
            }
        }
    }
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            printf("%d ", a[i][j]);
        }
    }
}