#include <stdio.h>

int main(){
    float a,b,s;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    switch(c)
    {
        case '+':
        s = a + b;
        printf("%.0f",s);
        break;

        case '-':
        s = a - b;
        printf("%.0f",s);
        break;

        case '*':
        s = a * b;
        printf(".0f",s);
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
    return 0;
}