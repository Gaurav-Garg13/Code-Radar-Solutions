// Your code here...
#include <stdio.h>
void printtriangle(int n) {
    for (int i= 0;i < n;i++){
        for (int j = 0;j < n-i-1 ;j++){
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
    printtriangle(length);
    return 0;
}