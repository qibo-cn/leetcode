/*
 * @lc app=leetcode.cn id=167 lang=c
 *
 * [167] 两数之和 II - 输入有序数组
 *
 * https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted/description/
 *
 * algorithms
 * Easy (54.06%)
 * Likes:    313
 * Dislikes: 0
 * Total Accepted:    102K
 * Total Submissions: 187.7K
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * 给定一个已按照升序排列 的有序数组，找到两个数使得它们相加之和等于目标数。
 *
 * 函数应该返回这两个下标值 index1 和 index2，其中 index1 必须小于 index2。
 *
 * 说明:
 *
 *
 * 返回的下标值（index1 和 index2）不是从零开始的。
 * 你可以假设每个输入只对应唯一的答案，而且你不可以重复使用相同的元素。
 *
 *
 * 示例:
 *
 * 输入: numbers = [2, 7, 11, 15], target = 9
 * 输出: [1,2]
 * 解释: 2 与 7 之和等于目标数 9 。因此 index1 = 1, index2 = 2 。
 *
 */

// @lc code=start

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
int *twoSum(int *numbers, int numbersSize, int target, int *returnSize) {
  if (numbersSize == 0) {
    *returnSize = 0;
    return NULL;
  }
  if (target < numbers[0]) {
    return NULL;
  }
  int *tmp = (int *)malloc(2 * sizeof(int));
  for (int i = 0, j = numbersSize - 1; i < numbersSize && j >= 0;) {
    if (numbers[i] + numbers[j] == target) {
      tmp[0] = i + 1, tmp[1] = j + 1;
      *returnSize = 2;
      return tmp;
    }

    if (numbers[i] + numbers[j] > target) {
      j--;
      continue;
    }
    if (numbers[i] + numbers[j] < target) {
      i++;
      continue;
    }
  }
  return NULL;
}

// int main() {
//   int numbers[] = {2, 7, 11, 15};
//   int returnSize[2];
//   twoSum(numbers, 4, 9, returnSize);
//   system("pause");
//   return 0;
// }
// @lc code=end
