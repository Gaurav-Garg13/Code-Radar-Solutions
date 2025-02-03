#include <stdio.h>

int main(){
    float a,b,s;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    switch(c)
    {
        case '+':
        s = a + b;
        break;

        case '-':
        s = a - b;
        break;

        case '*':
        s = a * b;
        break;

        case '/':
        s = a / b;
        break;

        default:
        printf("error");
        break;

    }
    printf("%f",s);
    return 0;
}