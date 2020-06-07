/*
 * @Author: Qi Bo
 * @Date: 2020-06-07 00:11
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
 * @lc app=leetcode.cn id=66 lang=c
 *
 * [66] 加一
 */

// @lc code=start

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *plusOne(int *digits, int digitsSize, int *returnSize) {
  unsigned int sum = 0;
  int i = 0;
  int flag = 0;
  while (i < digitsSize) {
    if (digits[i] == 9) {
      flag++;
    }
    i++;
  }
  if (flag == digitsSize) {
    *returnSize = digitsSize + 1;
  } else {
    *returnSize = digitsSize;
  }

  int *ret = (int *)malloc(sizeof(int) * (*returnSize));
  if (*returnSize > digitsSize) {
    ret[0] = 1;
    for (int i = 1; i < *returnSize; i++) {
      ret[i] = 0;
    }
    return ret;
  }
  digits[digitsSize - 1] += 1;
  for (int i = digitsSize - 1; i >= 0; i--) {
    if (digits[i] == 10) {
      digits[i] = 0;
      digits[i - 1] += 1;
    }
  }
  for (int i = 0; i < digitsSize; i++) {
    ret[i] = digits[i];
  }
  return ret;
}

// int main() {
//   int dig[] = {8, 9, 9, 9};
//   int *returnSize;
//   plusOne(dig, 4, returnSize);
//   system("pause");
//   return 0;
// }
// @lc code=end
