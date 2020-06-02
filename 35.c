/*
 * @Author: Qi Bo
 * @Date: 2020-06-02 22:55
 * @Copyright [2020] [Qi Bo]
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http: //www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

// @lc code=start

int searchInsert(int *nums, int numsSize, int target) {
  if (numsSize == 0)
    return -1;
  if (target > nums[numsSize - 1]) {
    return numsSize;
  }
  if (target < nums[0]) {
    return 0;
  }
  int tmp = 0;
  for (int i = 0; i < numsSize; i++) {
    if (nums[i] < target) {
      continue;
    }
    if (nums[i] == target) {
      return i;
    }
    if (nums[i] > target) {
      return i;
    }
  }
  return 0;
}

// int main() {
//   int nums[] = {1, 3, 5, 6};

//   printf("%d ", searchInsert(nums, 4, 5));
//   system("pause");
//   return 0;
// }
// @lc code=end
