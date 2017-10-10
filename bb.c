#include <stdio.h>

int main(void)
{
    int a;
    int *pa;

    pa = &a;
    *pa = 10;

    printf("pointer a : %d\n", *pa);
    printf("name a : %d\n", a);

    return 0;
    }
