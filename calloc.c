
# include <stdio.h>
# include <stdlib.h>


// int main()
// {
// int * ptr;
// int n,i;
// printf("\nEnter the size of the array");
// scanf("%d",&n);
// ptr=(int*)calloc(n,n*(sizeof(int)));
// for (i=0;i<n;i++)
// {
//     printf("\n Enter value of this array ");
//     scanf("%d",&ptr[i]);
// }
// for (i=0;i<n;i++)
// {
//     printf("The value is %d",ptr[i]);
// }
// free(ptr);
// return 0;
// }

int main()
{
int * ptr;
int n,i;
printf("\nEnter the size of the array");
scanf("%d",&n);
ptr=(int*)calloc(n,n*(sizeof(int)));
for (i=0;i<n;i++)
{
    printf("\n Enter value of this array ");
    scanf("%d",&ptr[i]);
}
for (i=0;i<n;i++)
{
    printf("The value is %d\n",ptr[i]);
}

printf("\nEnter the size of the new array");
scanf("%d",&n);
ptr=(int*)realloc(ptr,n*(sizeof(int)));
for (i=0;i<n;i++)
{
    printf("\n Enter value of this array ");
    scanf("%d",&ptr[i]);
}
for (i=0;i<n;i++)
{
    printf("The value is %d\n",ptr[i]);
}
free(ptr);
return 0;
}