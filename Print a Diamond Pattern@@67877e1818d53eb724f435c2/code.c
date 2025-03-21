// Your code here...
#include<stdio.h>
void diamond(int n){
for (int i = 1;i<= n; i+=2){
    for (int j = 0;j< (n-1)/2;j++) printf(" ");
    for (int j= 0;j<i;j++) printf("*");
    printf("\n");
}
for (int i = n-2;i >= 1; i -= 2){
    for (int j = 0;j<(n-1)/2;j++)printf(" ");
    for (int j = 0;j<i;j++) printf("*");
    printf("\n");
}
}
int main(){
    int length;
    scanf("%d",&length);
    diamond(length);
    return 0;
}