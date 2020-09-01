/*递归：递归计算先拿和后拿的总差值total，若差值大于等于0，则玩家1获胜
    1.确定递归含义以及返回值
        total(int *nums, int i, int j, int turn)
        turn符号位：若此轮是玩家1选，turn则为1
        turn符号位：若此轮是玩家2选，turn则为-1
    2.确定终止条件
        当i==j时，当前的值*符号位turn
    3.确定单层递归逻辑

*/
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
