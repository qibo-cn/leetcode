/*
 * @Author: Qi Bo
 * @Date: 2020-07-08 00:20
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
 * @lc app=leetcode.cn id=202 lang=c
 *
 * [202] 快乐数
 *
 * https://leetcode-cn.com/problems/happy-number/description/
 *
 * algorithms
 * Easy (60.10%)
 * Likes:    384
 * Dislikes: 0
 * Total Accepted:    85.9K
 * Total Submissions: 142.6K
 * Testcase Example:  '19'
 *
 * 编写一个算法来判断一个数 n 是不是快乐数。
 *
 * 「快乐数」定义为：对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和，然后重复这个过程直到这个数变为
 * 1，也可能是 无限循环 但始终变不到 1。如果 可以变为  1，那么这个数就是快乐数。
 *
 * 如果 n 是快乐数就返回 True ；不是，则返回 False 。
 *
 *
 *
 * 示例：
 *
 * 输入：19
 * 输出：true
 * 解释：
 * 1^2 + 9^2 = 82
 * 8^2 + 2^2 = 68
 * 6^2 + 8^2 = 100
 * 1^2 + 0^2 + 0^2 = 1
 *
 *
 */

// @lc code=start

int sum(int n) {
  int res = 0;
  int y = n;
  int x = n;
  while (y != 0) {
    x = y % 10;
    res = res + x * x;
    y = y / 10;
  }
  return res;
}

bool isHappy(int n) {
  int res = n;
  int count = 0;
  while (res != 1) {
    res = sum(res);
    count++;
    if (count > 50)
      return false;
    if (res == 1)
      return true;
  }
  return true;
}

// @lc code=end
