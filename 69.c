/*
 * @Author: Qi Bo
 * @Date: 2020-06-07 23:08
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
 * @lc app=leetcode.cn id=69 lang=c
 *
 * [69] x 的平方根
 */

// @lc code=start

int binSearch(int s, int e, int x) {
  int mid = s + (e - s) / 2;
  while (s + 1 < e) {
    if (x / mid < mid) {
      return binSearch(s, mid, x);
    } else {
      return binSearch(mid, e, x);
    }
  }

  return s;
}
int mySqrt(int x) {
  if (x == 0)
    return 0;
  if (x <= 1)
    return 1;
  if (x < 0)
    return -1;
  if (x >= 4 && x < 9)
    return 2;
  if (x > 1 && x < 4)
    return 1;
  if (x >= 9 && x < 16)
    return 3;
  if (x >= 16 && x < 25)
    return 4;
  if (x >= 25 && x < 36)
    return 5;
  if (x >= 36 && x < 49)
    return 6;

  int ret = binSearch(1, x / 2, x);
  ret = ret * ret > x ? ret - 1 : ret;
  return ret;
}

// int main() {
//   printf("%d ", mySqrt(35));
//   system("pause");
//   return 0;
// }
// @lc code=end
