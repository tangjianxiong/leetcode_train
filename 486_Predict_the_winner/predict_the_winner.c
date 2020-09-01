int total(int *nums, int i, int j, int turn)
{
    if (i == j)
        return nums[i] * turn;
    int scorefirst = nums[i] * turn + total(nums, i + 1, j, -turn);
    int scorefollow = nums[j] * turn + total(nums, i, j - 1, -turn);
    return fmax(scorefirst * turn, scorefollow * turn) * turn;
}
bool PredictTheWinner(int *nums, int numsSize)
{
    return total(nums, 0, numsSize - 1, 1) >= 0;
}