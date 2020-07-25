/*
 * @Author: Qi Bo
 * @Date: 2020-07-13 23:38
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
 * @lc app=leetcode.cn id=204 lang=c
 *
 * [204] 计数质数
 *
 * https://leetcode-cn.com/problems/count-primes/description/
 *
 * algorithms
 * Easy (33.89%)
 * Likes:    381
 * Dislikes: 0
 * Total Accepted:    64.4K
 * Total Submissions: 188K
 * Testcase Example:  '10'
 *
 * 统计所有小于非负整数 n 的质数的数量。
 *
 * 示例:
 *
 * 输入: 10
 * 输出: 4
 * 解释: 小于 10 的质数一共有 4 个, 它们是 2, 3, 5, 7 。
 *
 *
 */

// @lc code=start
bool isPrime(int n) {
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}
int countPrimes(int n) {

  int x;
  int count = 0;
  if (n == 0 || n == 1 || n == 2)
    return 0;
  if (n == 3)
    return 1;
  for (int i = 2; i < n; i++) {
    if (isPrime(i))
      count++;
  }
  return count;
}

// @lc code=end
