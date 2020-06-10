/*
 * @Author: Qi Bo
 * @Date: 2020-06-08 23:28
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
 * @lc app=leetcode.cn id=70 lang=c
 *
 * [70] 爬楼梯
 */

// @lc code=start

int calc(int *data, int n) {
  if (data[n] > 0) {
    return data[n];
  }
  int ret = data[n] = calc(data, n - 1) + calc(data, n - 2);
  return ret;
}

int climbStairs(int n) {

  if (n == 1)
    return 1;
  if (n == 2)
    return 2;
  int *data = (int *)malloc((n + 1) * sizeof(int));
  //   memset(data, 0, n + 1);
  data[1] = 1;
  data[2] = 2;
  int steps = 0;
  steps = calc(data, n);
  return steps;
}

// int main() {
//   printf("%d ", climbStairs(10));
//   system("pause");
//   return 0;
// }
// @lc code=end
