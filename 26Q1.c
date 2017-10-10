#include<stdio.h>

int check_same(int *lotto_nums, int *my_nums);

int main(void)
{
    int lotto_nums[6] = {4, 10, 25, 30, 41, 45};
    int my_nums[6];
    int i,j;

    for(i=0; i<6; i++)
    {
        scanf(" %d", &my_nums[i]);
        }
    j = check_same( lotto_nums,  my_nums);
    printf("%d", j);

}
int check_same(int *lotto_nums, int *my_nums)
{
    int i, j, k=0 ;
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            if(lotto_nums[i]== my_nums[j]) k++ ;
         }
   
     }
    return (k);

}
