// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers

#include <stdio.h>
int main(){
    int sum,num,i;
    printf("enter positive number : ");
    scanf("%d",&num);

    for(i=1;i<=num;++i)
    {
        sum=i+sum;
    }
    printf("%d",sum);

     return 0;
}

