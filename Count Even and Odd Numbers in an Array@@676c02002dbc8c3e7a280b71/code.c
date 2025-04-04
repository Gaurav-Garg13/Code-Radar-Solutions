#include <stdio.h>
int main(){
    int arr[1000000];
    int n;
    for (int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count;
    int coun;
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            count+=1;
        }
        else {
            coun +=1;
        }

    }
    printf("%d %d",count,count1);
    return 0;
}