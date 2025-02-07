#include <stdio.h>
int main(){
    unsigned int num;
    unsigned int result;
    scanf("%d",&num);
    result = ~ num;
    printf("%d", result);
    return 0;
}