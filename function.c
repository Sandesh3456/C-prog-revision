# include <stdio.h>

int function (int a,int b,int c)
{
    return a+b+c;
}
int main()
{
int a=3,b=5,c=3;
printf("The sum is %d",function(a,b,c));
return 0;    
}