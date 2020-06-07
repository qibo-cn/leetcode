/*
 * @Author: Qi Bo
 * @Date: 2020-06-06 21:32
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
 * @lc app=leetcode.cn id=58 lang=c
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
int lengthOfLastWord(char *s) {
  if (strlen(s) == 1) {
    if (s[0] == ' ')
      return 0;
    else
      return 1;
  }
  int flag = 0;
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == ' ') {
      if (s[i + 1] == '\0')
        return flag;
      if (s[i + 1] != '\0' && s[i + 1] != ' ') {
        flag = 0;
        continue;
      } else
        continue;
    }
    if (s[i] != ' ' && s[i] != '\0') {
      flag++;
      if (s[i + 1] == '\0') {
        return flag;
      }
      continue;
    }
  }
  return 0;
}

// int main() {
//   char *s = "b   a     ";
//   printf("%d ", lengthOfLastWord(s));
//   system("pause");
//   return 0;
// }

// @lc code=end
