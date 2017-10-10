#include<stdio.h>

void print_graph(int *ps, int size);

int main(void)
{
    int score[5] = {72, 88, 95, 64, 100};
    }

void print_graph(int *pa, int size)
{
    int i,n;

    for(n=0; n<21; n++)
    {
        for(i=0; i<5; i++)
        {
            printf("*");
            if(*pa[i]< n*5)
            {
                break;
                }
        }
    }
    }
