// Your code here...
#include<stdio.h>
void tobin(int num){
    if (num == 0){
        printf("0");
        return;
    }
    while (num > 0){
        printf("%d",num % 2);
        num = num/2;
    }
}
int main(){
    int n;
    scanf("%d\n",&n);
    printf("\n")
    tobin(n);
    return 0;
}