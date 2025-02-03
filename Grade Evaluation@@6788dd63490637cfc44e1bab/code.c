#include <stdio.h>
int main(){
    char s;
    scanf("%c",&s);
    if (s == 'A'){
        printf("Excellent");
    }
    else if (s == 'B'){
        printf("Good");
    }
    else if (s == 'C'){
        printf("Average");
    }
    else if (s == 'D'){
        printf("Below Average");
    }
    else if (s == 'F'){
        printf("Fail");
    }
    else {
        printf("Invalid grade");
    }
    return 0;
}