#include <stdio.h>
int main(){
    int n;
    scanf("%d,&n");
    int numb = sizeof(unsigned int)*8;
    if (n & (1 << (numb-1))){
        printf("Set");
    }
    else {
        printf("Not Set");
    }
    return 0;
}