// Program to add numbers until the user enters zero

#include <stdio.h>
int main() {
double number,sum=0;

do{
    printf("enter number: \n");
    scanf("%lf",&number);
    sum+=number;
}while

  (number !=0.0);
  printf("sum= %.2lf",sum);

return 0;
}
