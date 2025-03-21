// Your code here...
#include <stdio.h>
void numtri(int n){
    for (int i=1;i<=n;i++){
        for (int j = 1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
int main(){
    int length;
    scanf("%d",&length);
    numtri(length);
    return 0;
}