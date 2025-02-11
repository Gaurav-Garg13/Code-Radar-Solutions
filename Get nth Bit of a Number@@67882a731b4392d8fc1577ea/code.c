// Your code here...
#include <stdio.h>
int getnth(int number, int n){
    retiurn (number >> (n-1))
}
int main(){
    int number,n;
    scanf("%d %d",&number,&n);
    int bit = getnth(number,n);
    printf("%d",bit);
    return 0;
}
