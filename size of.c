#include<stdio.h>
int main()
{
    int inttype;
    float floattype;
    double doubletype;
    char chartype;

    printf(" size of int: %zu\n",sizeof(inttype));
    printf(" size of float: %zu\n",sizeof(floattype));
    printf(" size of double: %zu\n",sizeof(doubletype));
    printf(" size of char: %zu\n",sizeof(chartype));

    return 0;

}
