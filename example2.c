# include <stdio.h>


int main()

{   int dec,bbinary=0,rbinary,binary=0;
    printf("Enter a number");
    scanf("%d",&dec);

    while(dec>=1)
    {
    rbinary=dec%2;
    binary=binary*10+rbinary;
    dec=dec/2;
    }
    printf("%d",binary);
    printf("\n");

    while(binary>0)
    {
        rbinary=binary%10;
        bbinary = bbinary*10+rbinary;
        binary=binary/10;
    }
    printf("%d",bbinary);

return 0;
}