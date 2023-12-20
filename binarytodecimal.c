#include <stdio.h>


int main() {
    int binary, remainder, decimal = 0, base = 1;
    printf("Enter binary ");
    scanf("%d", &binary);
    while (binary > 0) {
    remainder = binary % 10;
    decimal = decimal + remainder * base;
    binary = binary /10;
    base = base * 2;
    }   
    printf("Decimal is %d\n", decimal); 
    return 0;
}
