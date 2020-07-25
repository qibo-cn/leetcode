/*
 * @Author: Qi Bo
 * @Date: 2020-07-22 19:58
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
 * @lc app=leetcode.cn id=3 lang=c
 *
 * [3] 无重复字符的最长子串
 *
 * https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/description/
 *
 * algorithms
 * Medium (34.67%)
 * Likes:    4015
 * Dislikes: 0
 * Total Accepted:    578.8K
 * Total Submissions: 1.6M
 * Testcase Example:  '"abcabcbb"'
 *
 * 给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。
 *
 * 示例 1:
 *
 * 输入: "abcabcbb"
 * 输出: 3
 * 解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
 *
 *
 * 示例 2:
 *
 * 输入: "bbbbb"
 * 输出: 1
 * 解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
 *
 *
 * 示例 3:
 *
 * 输入: "pwwkew"
 * 输出: 3
 * 解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
 * 请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。
 *
 *
 */

// @lc code=start
int hasSame(char *s, int k, int j) {
  for (int i = k; i < j; i++) {
    if (s[i] == s[j]) {
      return 1;
    }
  }
  return 0;
}
int lengthOfLongestSubstring(char *s) {
  int len = strlen(s);
  if (len == 1)
    return 1;
  if (len == 0)
    return 0;
  int count = 1;
  int res = 0;
  int flag = 0;
  for (int i = 0; i < len;) {
    for (int j = i + 1; j < len;) {
      if (0 == hasSame(s, i, j)) {
        count++;
        j++;
        flag = 0;
      } else {
        count = 1;
        i++;
        flag = 1;
        break;
      }

      res = res > count ? res : count;
    }
    if (flag == 0) {
      count = 1;
      i++;
    }
  }

  return res;
}
// int main() {
//   lengthOfLongestSubstring("abcabcbb");
//   system("pause");
//   return 0;
// }
// @lc code=end
