// Your code here...
#include<stdio.h>
void tobin(int num){
    if (num == 0){
        printf("0");
        return 0
    }
    while (num > 0){
        printf("%d",num % 2);
        num = num/2;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",n);
    tobin(n);
    printf("\n");
    return 0;
}