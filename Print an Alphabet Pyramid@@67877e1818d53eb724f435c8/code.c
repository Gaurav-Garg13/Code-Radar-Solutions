// Your code here...
#include <stdio.h>
void alphapy(int n){
for (int i = 0; i< n; i++){
    for (char ch = 'A';ch <= 'A'+i;ch++){
        printf("%c ",ch);
    }
    printf("\n");

}}
int main (){
    int length;
    scanf("%d",&length);
    alphapy(length);
    return 0;
}