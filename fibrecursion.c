#include <stdio.h>


int main() {
    int n,i,a=0,b=1;
    printf("Enter the value of n ");
    scanf("%d",&n);
    if(n==1) {
        printf("Fibonacci number is %d\n",a);
    }else if(n==2) {
        printf("Fibonacci number is%d\n",b);
    }else{
        int number;
        for (i=3;i<=n;i++) {
            number =a+b;
            a=b;
            b=number;}
    printf("Fibonacci number is %d\n",number);}
    return 0;
}
