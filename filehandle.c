# include <stdio.h>


int main()
{
    FILE * fptr = NULL;
    fptr =fopen("text.txt","w+");
    // char c = fgetc(fptr);
    // printf("The character I read is %c\n",c);
    char string[34]="HElo";
    // fgets(string,34,fptr);
    // printf("%s",string);
    // gets(string);
    // printf("\n%s",string);
    // reading operation
    // fscanf(fptr,"%s",string);
    // printf("The string is %s\n",string);
    //writing operation
    // fprintf(fptr,"%s",string);
    fputs("Helo",fptr);
    fgets(string,34,fptr);
    printf("%s",string);
    fclose(fptr);
    // printf("The string was written");
}