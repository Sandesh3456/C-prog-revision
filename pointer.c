# include<stdio.h>


int main()
{int a=43,b=1;
int * ptr=&a;
ptr++;
printf("%d\n",&a);
printf("%d\n",ptr);
printf("%d\n",*ptr);
printf("%d\n",&ptr);
printf("%d",ptr);
}