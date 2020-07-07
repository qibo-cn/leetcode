/*
 * @Author: Qi Bo
 * @Date: 2020-06-30 23:29
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
 * @lc app=leetcode.cn id=169 lang=c
 *
 * [169] 多数元素
 *
 * https://leetcode-cn.com/problems/majority-element/description/
 *
 * algorithms
 * Easy (63.44%)
 * Likes:    644
 * Dislikes: 0
 * Total Accepted:    181.2K
 * Total Submissions: 284.6K
 * Testcase Example:  '[3,2,3]'
 *
 * 给定一个大小为 n
 * 的数组，找到其中的多数元素。多数元素是指在数组中出现次数大于 ⌊ n/2 ⌋ 的元素。
 *
 * 你可以假设数组是非空的，并且给定的数组总是存在多数元素。
 *
 *
 *
 * 示例 1:
 *
 * 输入: [3,2,3]
 * 输出: 3
 *
 * 示例 2:
 *
 * 输入: [2,2,1,1,1,2,2]
 * 输出: 2
 *
 *
 */

// @lc code=start

int comp(const void *x, const void *y) { return (*(int *)x - *(int *)y); }

int majorityElement(int *nums, int numsSize) {
  qsort(nums, numsSize, sizeof(int), comp);
  int cnt = 0;
  int tmp;

  return nums[numsSize / 2];
}

// @lc code=end
