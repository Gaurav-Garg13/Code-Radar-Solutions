// Your code here...
#include <stdio.h>
void numpy(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n - i; j++){
            printf(" ");
        }
        for (int k = 1; k <= i; k++){
            printf("%d ",k);
        }
    printf("\n");
    }
}
int main(){
    int length;
    scanf("%d",&length);
    numpy(length);
    return 0;
}