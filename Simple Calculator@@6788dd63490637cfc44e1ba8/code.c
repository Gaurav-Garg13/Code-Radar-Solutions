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
        if(b == 0)
        {
            printf("error");
            break;
        }
        break;

        default:
        printf("error");
        break;

    }
    printf("%.0f",s);
    return 0;
}