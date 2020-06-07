/*
 * @Author: Qi Bo
 * @Date: 2020-06-07 18:40
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
 * @lc app=leetcode.cn id=67 lang=c
 *
 * [67] 二进制求和
 */

// @lc code=start

#include <stdio.h>
#include <string.h>

char *addBinary(char *a, char *b) {
  int la = strlen(a);
  int lb = strlen(b);
  int len = la > lb ? la : lb;
  char *ret = (char *)malloc(len + 2);
  memset(ret, '0', len + 2);

  ret[len + 1] = '\0';
  for (int i = len, j = la - 1, k = lb - 1; i > 0; i--, j--, k--) {
    int sum = ((j < 0 ? 0 : (a[j] - '0')) + (k < 0 ? 0 : (b[k] - '0')));
    char temp = ret[i];
    ret[i] = '0' + (sum + (temp - '0')) % 2;
    ret[i - 1] = '0' + (sum + (temp - '0')) / 2 + ret[i - 1] - '0';
  }
  if (ret[0] == '0')
    return &ret[1];
  else
    return &ret[0];
}

// int main() {
//   char *a = "11";
//   char *b = "1";
//   printf("%s", addBinary(a, b));
//   system("pause");
//   return 0;
// }

// @lc code=end
