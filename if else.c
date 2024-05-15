#include<stdio.h>
int main()
{
    int num;

    printf("enter an intezer : ");
    scanf("%d",&num);

    if(num<0)
    {
        printf("you entered negative number ");

    }
    else{
       printf("you entered positive number");
    }


    return 0;
}
