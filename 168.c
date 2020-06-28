/*
 * @Author: Qi Bo
 * @Date: 2020-06-28 23:48
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
 * @lc app=leetcode.cn id=168 lang=c
 *
 * [168] Excel表列名称
 *
 * https://leetcode-cn.com/problems/excel-sheet-column-title/description/
 *
 * algorithms
 * Easy (37.79%)
 * Likes:    231
 * Dislikes: 0
 * Total Accepted:    28.6K
 * Total Submissions: 75.3K
 * Testcase Example:  '1'
 *
 * 给定一个正整数，返回它在 Excel 表中相对应的列名称。
 *
 * 例如，
 *
 * ⁠   1 -> A
 * ⁠   2 -> B
 * ⁠   3 -> C
 * ⁠   ...
 * ⁠   26 -> Z
 * ⁠   27 -> AA
 * ⁠   28 -> AB
 * ⁠   ...
 *
 *
 * 示例 1:
 *
 * 输入: 1
 * 输出: "A"
 *
 *
 * 示例 2:
 *
 * 输入: 28
 * 输出: "AB"
 *
 *
 * 示例 3:
 *
 * 输入: 701
 * 输出: "ZY"
 *
 *
 */

// @lc code=start

char *convertToTitle(int n) {
  char *res = (char *)malloc(100000 * sizeof(char));
  int x = n, y = n, i = 0;
  while (x != 0) {
    y = y % 26;
    x = x / 26;
    if (y == 0) {
      res[i++] = 'Z';
      x = x - 1;
    } else {
      res[i++] = y + 'A' - 1;
    }
    y = x;
  }
  res[i] = '\0';
  for (int j = 0; j < i / 2; j++) {
    char x = res[j];
    res[j] = res[i - 1 - j];
    res[i - 1 - j] = x;
  }
  return res;
  //   i = i - 1;
  //   while (i >= 0) {
  //     printf("%c", res[i--]);
  //   }
}

// int main() {
//   convertToTitle(26);
//   system("pause");
//   return 0;
// }
// @lc code=end
