/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start

int removeDuplicates(int *nums, int numsSize) {
  int flag = 0;
  if (numsSize == 0) {
    return 0;
  }
  for (int i = 0, j = 1; i < numsSize, j < numsSize;) {
    if (nums[i] == nums[j]) {
      j++;
      flag++;
      continue;
    } else {
      nums[i + 1] = nums[j];
      j++;
      i++;
    }
  }
  //   int i = 0;
  //   while (i < numsSize) {
  //     printf("%d ", nums[i++]);
  //   }
  return numsSize - flag;
}
// int main() {
//   int nums[] = {1, 1, 2, 2, 3};
//   removeDuplicates(nums, 5);
//   system("pause");
//   return 0;
// }

// @lc code=end
