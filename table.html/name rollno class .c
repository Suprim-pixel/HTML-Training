#include<stdio.h>
int main()
{
    char name[20];
    int roll,i;
    float marks;
    char gender;
    
    for(i=0;i<5;i++)
    {
        printf("enter name,roll,marks,gender ");
        scanf("%s%d%f%c",&name[i],&roll[i],&marks[i],&gender[i]);
    }
    printf("\n         \n");
    printf("\"STUDENT DETAILS\"");
    printf("\n         \n");
    PRINTF("\n\t Name\t Roll\t Marks\t Gender\n");

    for(i=0;i<5;i++)
    {
        printf("\n \t %s \t %d \t %f \t %c",name,&roll,&marks,&gender );

        
    }

    return 0;
}