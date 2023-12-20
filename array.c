# include<stdio.h>



int swap(int *a, int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return *a,*b;
}

int main()
{   
    int a=10,b=20;
    printf("Value of variable 'a'and 'b' is %d %d\n",a,b );
    swap(&a,&b);
    printf("Value of variable 'a'and 'b' is %d %d\n",a,b );
    return 0;
}