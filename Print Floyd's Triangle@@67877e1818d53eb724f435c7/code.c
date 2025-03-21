// Your code here...
#include<stdio.h>
void floyd(int n){
    int num = 1;
    for (int i = 1;i <= n; i++){
        for (int j = 1;j <= i; j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}
int main(){
    int len;
    scanf("%d",&len);
    floyd(len);
    return 0;
}