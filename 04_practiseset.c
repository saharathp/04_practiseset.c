#include<stdio.h>

int main(){
    int n,i=0;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("MULTIPLICATION TABLE OF %d is:\n",n);
    while(i<10){
        int m;
        i++;
        m=n*i;
        printf("%d*%d=%d\n",n,i,m);
    }
    return 0;
}