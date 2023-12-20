# include <stdio.h>


int main()
{
    char name[7]="sandesh";
    char *ptr = name;
    printf("The value of ptr is %p\n", &name);
    printf("The name is %s\n",name);
    // puts(name[3]);
    ptr=ptr+6;
    printf("The value is %c\n", *ptr);
    return 0;
}