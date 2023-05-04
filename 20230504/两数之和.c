/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>
int *twoSum(int *nums, int numsSize, int target, int *returnSize);

int main(void)
{
  return 0;
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
  for (int i = 0; i < numsSize; i++)
  {
    for (int j = i + 1; i < numsSize; j++)
    {
      if (nums[i] + nums[j] == target)
      {
        int *ret = malloc(sizeof(int) * 2); // 动态分配一个大小为 2 的整数数组
        ret[0] = i, ret[1] = j;             // 它们的下标存入数组中
        *returnSize = 2; // 设置返回数组的大小为2
        return ret; // 返回数组
      }
    }
  }
  *returnSize = 0; // 如果不存在的话 将大小设置为0
  return NULL; // 返回 NULL
}