#include <stdio.h>

int main(){
    int a,b,s;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c)
    {
        case "+":
        s = a + b;
        break;

        case "-":
        s = a - b;
        break;

        case "*":
        s = a * b;
        break;

        case "/":
        s = a / b;
        break;

        default:
        printf("error\n");
        break;

    }
    printf("%d",s);
    return 0;
}