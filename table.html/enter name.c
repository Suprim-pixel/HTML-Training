#include<stdio.h>
#include<myheader.h>     // user defined header file 
int main()
{
    int a,b,sum;
    printf(" Enter two number ")
    scanf("%d%d",&a,&b);
    sum=add (a,b);
    printf("The sum is %d"sum );
    return0;
    
}