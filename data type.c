#include<stdio.h>
#include<stdbool.h>
int main(){
  int age=22;
  char name='A';
  float salary= 2000.899;
  double bonus = 2333.22333;
  bool married = false;
  printf  ("Age=%d\nName=%c\nSalary=%f\nBonus=%lf\n",age,name,salary,bonus);
  printf("Married: %d",married);
  return 0;
}