/*
 * @Author: Qi Bo
 * @Date: 2020-07-26 11:51
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
 * @lc app=leetcode.cn id=633 lang=c
 *
 * [633] 平方数之和
 *
 * https://leetcode-cn.com/problems/sum-of-square-numbers/description/
 *
 * algorithms
 * Easy (33.39%)
 * Likes:    126
 * Dislikes: 0
 * Total Accepted:    25.3K
 * Total Submissions: 75.4K
 * Testcase Example:  '5'
 *
 * 给定一个非负整数 c ，你要判断是否存在两个整数 a 和 b，使得 a^2 + b^2 = c。
 *
 * 示例1:
 *
 *
 * 输入: 5
 * 输出: True
 * 解释: 1 * 1 + 2 * 2 = 5
 *
 *
 *
 *
 * 示例2:
 *
 *
 * 输入: 3
 * 输出: False
 *
 *
 */

// @lc code=start
#include <stdbool.h>
bool judgeSquareSum(int c) {
  int i = 0, j = (int)sqrt(c);
  for (i = 0; i <= (int)sqrt(c);) {
    if ((long long)i * i + (long long)j * j == c)
      return true;
    if ((long long)i * i + (long long)j * j < c)
      i++;
    if ((long long)i * i + (long long)j * j > c)
      j--;
    if (i > j)
      return false;
  }
  return false;
}
// int main() {
//   judgeSquareSum(2);
//   system("pause");
//   return 0;
// }
// @lc code=end
