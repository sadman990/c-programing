#include<stdio.h>
int main(){
    char c;
    printf("enter character : ");
    scanf("%c",&c);
    if(c== 'a' || c== 'e' ||c== 'i' ||c== 'o' ||c== 'u'){
        printf("%c is vowel");
    }
    else{
       printf(" %c is consonant");
    }

return 0;
}
