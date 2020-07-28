/*
 * @Author: Qi Bo
 * @Date: 2020-07-26 12:23
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
 * @lc app=leetcode.cn id=345 lang=c
 *
 * [345] 反转字符串中的元音字母
 *
 * https://leetcode-cn.com/problems/reverse-vowels-of-a-string/description/
 *
 * algorithms
 * Easy (50.05%)
 * Likes:    103
 * Dislikes: 0
 * Total Accepted:    41.5K
 * Total Submissions: 82.3K
 * Testcase Example:  '"hello"'
 *
 * 编写一个函数，以字符串作为输入，反转该字符串中的元音字母。
 *
 * 示例 1:
 *
 * 输入: "hello"
 * 输出: "holle"
 *
 *
 * 示例 2:
 *
 * 输入: "leetcode"
 * 输出: "leotcede"
 *
 * 说明:
 * 元音字母不包含字母"y"。
 *
 */

// @lc code=start

#include <stdbool.h>
bool isY(char c) {
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
      c == 'E' || c == 'I' || c == 'O' || c == 'U') {
    return true;
  }
  return false;
}

char *reverseVowels(char *s) {
  char temp1, temp2;
  int len = strlen(s);
  int i = 0, j = len - 1;
  while (i < j) {
    if (isY(s[i])) {
      if (isY(s[j])) {
        temp1 = s[i];
        s[i] = s[j];
        s[j] = temp1;
        i++;
        j--;
      } else {
        j--;
      }
    } else {
      i++;
    }
  }
  return s;
}

// int main() {
//   reverseVowels("oo");
//   system("pause");
//   return 0;
// }
// @lc code=end
