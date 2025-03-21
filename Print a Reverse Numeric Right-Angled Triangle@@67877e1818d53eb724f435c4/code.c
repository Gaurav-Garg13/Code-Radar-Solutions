// Your code here...
#include <stdio.h>
void revtri(int n){
    for (int i = n; i>= 1;i--){
        for (int j =1;j<= i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
int main(){
    int lentgh;
    scanf("%d",&length);
    revtri(length);
    return 0;
}