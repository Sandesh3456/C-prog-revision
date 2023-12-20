#include <stdio.h>


void Sum() {
    int n1, n2, sum;
    printf("Enter the numbers: ");
    scanf("%d %d",&n1,&n2);
    sum = n1 + n2;
    printf("Sum= %d\n",sum);}
int main() {
    Sum();
    return 0;
}
