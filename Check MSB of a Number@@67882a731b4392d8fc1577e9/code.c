#include <stdio.h>
void check_msb(int num){
    int num_bits  = sizeof(int) * 8;
    int msb = num >> (num_bits - 1); 
    if (msb == 1){
        printf("set\n");
    }
    else {
        printf("Not Set\n");
    }
}
int main(){
    int number;
    scanf("%d",&number);
    check_msb(number);
    return 0;
}