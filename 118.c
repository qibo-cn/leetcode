/*
 * @Author: Qi Bo
 * @Date: 2020-06-14 22:47
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
 * @lc app=leetcode.cn id=118 lang=c
 *
 * [118] 杨辉三角
 */

// @lc code=start

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
int **generate(int numRows, int *returnSize, int **returnColumnSizes) {
  *returnSize = numRows;
  *returnColumnSizes = (int *)malloc(sizeof(int) * numRows);
  int **retArray = (int **)malloc(sizeof(int *) * numRows);
  for (int i = 0; i < numRows; i++) {
    (*returnColumnSizes)[i] = i + 1;
    retArray[i] = (int *)malloc(sizeof(int) * (i + 1));
    retArray[i][0] = 1;
    retArray[i][i] = 1;
  }
  for (int i = 2; i < numRows; i++) {
    for (int j = 1; j < i; j++)
      retArray[i][j] = retArray[i - 1][j - 1] + retArray[i - 1][j];
  }
  return retArray;
}

// @lc code=end
