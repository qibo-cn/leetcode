/*
 * @Author: Qi Bo
 * @Date: 2020-06-18 23:48
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
 * @lc app=leetcode.cn id=122 lang=c
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start

int maxProfit(int *prices, int pricesSize) {
  int maxProfit = 0;
  for (int i = 1; i < pricesSize; i++) {
    if (prices[i - 1] - prices[i] < 0) {
      maxProfit += prices[i] - prices[i - 1];
    }
  }
  return maxProfit;
}

// @lc code=end
