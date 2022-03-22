#include <stdio.h>
#include <stdlib.h>

void abslt(int nums[]){
    for (int i = 0; i < 5; i++)
    {
        if (nums[i] < 0)
        {
            int n = nums[i] * (-1);
            printf("O valor absoluto de %d é:\t%d\n", nums[i], n);
        } else
        {
            printf("O valor absoluto de %d é:\t%d\n", nums[i], nums[i]);
        }
    }
}

int main(int argc, char const *argv[]){
    
    int nums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nInforme o %d número: ", i+1);
        scanf("%d", &nums[i]);
    }

    abslt(nums);
    
    return 0;
}