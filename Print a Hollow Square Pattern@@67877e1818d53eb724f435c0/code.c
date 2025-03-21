// Loading Code...
#include <stdio.h>
void printholow(int n){
    for (int i = 0;i<n;i++){
        for (int j = 0;j<n;j++){
            if (i == 0 || i == n-1 || j == 0 || j == n-1){
                printf("* ");
                }
                else {
                    printf(" ");
                }
        }
                printf("\n");
        }
        }
        int main (){
            int size;
            scanf("%d",&size);
            printholow(size);
            return 0;
        }