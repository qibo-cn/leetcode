/*
 * @Author: Qi Bo
 * @Date: 2020-06-10 23:34
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
 * @lc app=leetcode.cn id=88 lang=c
 *
 * [88] 合并两个有序数组
 */

// @lc code=start

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n) {
  //   printf("%d, %d, %d, %d", nums1Size, m, nums2Size, n);
  int len = m > n ? m : n;
  int *tmp = (int *)malloc(sizeof(int) * m);
  for (int i = 0; i < m; i++) {
    tmp[i] = nums1[i];
  }
  int j = 0, k = 0, i = 0;
  for (i = 0, j = 0, k = 0; j < m && k < n; i++) {
    if (tmp[j] < nums2[k]) {
      nums1[i] = tmp[j];
      j++;
    } else {
      nums1[i] = nums2[k];
      k++;
    }
  }
  if (j == m) {
    while (k < n) {
      nums1[i++] = nums2[k++];
    }
    return;
  }
  if (k == n) {
    while (j < m) {
      nums1[i++] = tmp[j++];
    }
    return;
  }
}

// int main() {
//   int n1[] = {1, 2, 3, 0, 0, 0};
//   int n2[] = {2, 5, 6};
//   merge(n1, 3, 3, n2, 3, 3);
//   system("pause");
//   return 0;
// }
// @lc code=end
