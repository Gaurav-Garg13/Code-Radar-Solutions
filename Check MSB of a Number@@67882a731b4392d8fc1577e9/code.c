#include <stdio.h>
int main(){
    int n;
    scanf("%d,&n");
    int numb = 32;
    if (n & (1 << (numb-1))){
        printf("Set");
    }
    else {
        printf("Not Set");
    }
    return 0;
}