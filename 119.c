/*
 * @Author: Qi Bo
 * @Date: 2020-06-16 23:20
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
 * @lc app=leetcode.cn id=119 lang=c
 *
 * [119] 杨辉三角 II
 */

// @lc code=start

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *getRow(int rowIndex, int *returnSize) {
  *returnSize = rowIndex + 1;
  int *ret = (int *)malloc(sizeof(int) * (rowIndex + 1));
  int **tmp = (int **)malloc(sizeof(int *) * (rowIndex + 1));

  for (int i = 0; i < rowIndex + 1; i++) {
    tmp[i] = (int *)malloc(sizeof(int) * (i + 1));
    tmp[i][0] = 1;
    tmp[i][i] = 1;
  }
  for (int i = 2; i < rowIndex + 1; i++) {
    for (int j = 1; j < i; j++) {
      tmp[i][j] = tmp[i - 1][j - 1] + tmp[i - 1][j];
    }
  }

  for (int i = 0; i < rowIndex + 1; i++) {
    ret[i] = tmp[rowIndex][i];
  }
  return ret;
}

// @lc code=end
