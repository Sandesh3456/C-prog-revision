# include<stdio.h>

// int arrfun(int *array){
//   *(array+2) = 9;
//   printf("The value is %d",array[2]);
// }
int arrfun(int *ptr){
  *(ptr+2) = 11;
  printf("The value is %d",ptr[2]);
}


int main()
{
int array[]={3,7,3,4,5,6};
int *arrptr=array;
// printf("The address is %d",array);
// printf("The value is %d",*(array+2));
arrfun(array);
}