// Your code here...
#include <stdio.h>
void printtriangle(int n) {
    for (int i= 0;i < n;i++){
        for (int j = 0;j < n-1 ;j++){
            printf(" ");
        }
        for (int k = 0;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}
int main (){
    int length;
    scanf("%d",&length);
    printtraiangle(length);
    return 0;
}