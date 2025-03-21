// Your code here...
#include <stdio.h>
void alphapy(int n){
for (int i = 1; i<= n; i++){
    for (int j = 1; j<= n - i;j++){
        printf(" ");
    }
    for (char ch = 'A';ch < 'A'+i;ch++){
        printf("%c ",ch);
    }
    printf("\n");
}
}
int main (){
    int length;
    scanf("%d",&length);
    alphapy(length);
    return 0;
}