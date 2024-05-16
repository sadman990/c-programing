#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("enter three number : ");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1>n2){
       if(n1>n3){
        printf("%d is large",n1);
       }
       else{
        printf("%d is large",n3);
       }
    }
    else{
        if(n2>n3){
            printf("%d is large",n2);
        }
        else{
            printf("%d is large",n3);
        }

    }

return 0;
}

