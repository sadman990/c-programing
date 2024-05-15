#include<stdio.h>
int main ()
{
   int num;
    float num2;
    double num3;
    char name;

    printf("Enter Integer :");
    scanf("%d",&num);
    printf("Enter Float :");
    scanf("%f",&num2);
    printf("Enter Double :");
    scanf("%lf",&num3);
    printf("Enter Character :");
    scanf(" %c",&name);

    printf("Integer number : %d\n",num);
    printf("Float number : %f\n",num2);
    printf("Double number : %lf\n",num3);
    printf("Charater : %c\n",name);
    return 0;

}



