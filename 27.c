/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start

int removeElement(int *nums, int numsSize, int val) {
  int cnt = 0;
  for (int i = 0; i < numsSize;) {
    if (nums[i] == val) {
      for (int j = i; j < numsSize - 1; j++) {
        nums[j] = nums[j + 1];
      }
      numsSize--;
    } else {
      i++;
      continue;
    }
  }
  return numsSize;
}

// int main() {
//   int nums[] = {0, 1, 2, 2, 3, 0, 4, 2};
//   int len = removeElement(nums, 8, 2);
//   int i = 0;
//   while (i < len) {
//     printf("%d ", nums[i++]);
//   }
//   system("pause");
//   return 0;
// }

// @lc code=end
