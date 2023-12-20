# include<stdio.h>
# include<string.h>


typedef struct dursikshya{
    
    int id;
    int roll;
    float marks;  
    char name[50];
}dur;


int main()
{
struct dursikshya s1,s2,s3;
dur d1,d2,d3;
// s1.name = "sandesh";
s1.id = 1;
s1.roll =1;
s1.marks = 11; 
// s2.name = "ram";
s2.id = 2;
s2.roll = 2;
s2.marks = 12;
strcpy(s1.name,"ram");
// printf("The name is %s",s1.name);
printf("The id is %d\n",s1.id);
printf("The roll is %d\n",s1.roll);
printf("the marks is %f\n",s1.marks);
printf("The name is %s\n",s1.name);
return 0;
}