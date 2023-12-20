# include<stdio.h>
# include<conio.h>


int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    switch (a<30 ? 1 : a>30 ? 3 : 0)
    {
    case 1:

    printf("\n%d is less than 30",a);
    break;
    
    case 3:
    printf("\n%d is greater than 30",a);
    break;
   
    default:
     printf("\n%d is equal to 30",a);
    break;
    }

return 0;
}
