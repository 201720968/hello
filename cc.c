#include <stdio.h>

int main(void)
{
    int a = 10, b = 15, tot;
    double avg;
    int *pa, *pb;
    int *pt = &tot;
    double *pg = &avg;

    pa=&a;
    pb=&b;

    *pt=*pa+*pb;
    *pg=*pt/2.0;

    printf("two numbers : %d, %d\n", *pa, *pb);
    printf("hap : %d\n", *pt);
    printf("avg : %.1lf\n", *pg);

    return 0;
    }
