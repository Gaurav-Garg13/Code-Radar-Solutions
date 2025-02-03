#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if (a==isupper(a)){
        printf("Uppercase");
    }
    else if (a==islower(a)){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
    return 0;
}