#include <stdio.h>
int main(){
    char name[100];
    int age;
    char hobby[100];
    scanf("%s %d",&name,&age);
    scanf("\n %s",&hobby);
    printf("Name: %s",name);
    printf("\nAge: %d",age);
    printf("\nHobby: %s",hobby);
    return 0;
}