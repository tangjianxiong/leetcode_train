#include <stdio.h>
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    static int res[2] = {0};
    int temp = 0;
    for (int i = 0; i < numsSize; i++)
    {
        temp = nums[i];
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[j] == target - temp)
            {
                res[0] = i;
                res[1] = j;
                *returnSize = 2;
                return res;
            }
        }
    }
    return 0;
}
