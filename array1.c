# include<stdio.h>

int arrfun(int array[]){
    array[1]=3;
    printf("The value is %d",array[1]);
}


int main()
{
int array[]={3,7,3,4,5,6};
int *arrptr=array;
// printf("The address is %d",array);
// printf("The value is %d",*(array+2));
arrfun(array);
}