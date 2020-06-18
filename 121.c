/*
 * @Author: Qi Bo
 * @Date: 2020-06-18 22:08
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
 * @lc app=leetcode.cn id=121 lang=c
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start

int maxProfit(int *prices, int pricesSize) {
  //   int val = 0;
  //   for (int i = pricesSize - 1; i >= 0; i--) {
  //     /* code */
  //     for (int j = i; j >= 0; j--) {
  //       int tmp = prices[i] - prices[j];
  //       val = tmp > val ? tmp : val;
  //     }
  //   }
  //   return val;
  int maxProfit = 0;
  int minPrice = 0xffff;
  for (int i = 0; i < pricesSize; i++) {
    if (minPrice > prices[i]) {
      minPrice = prices[i];
    } else if (prices[i] - minPrice > maxProfit) {
      maxProfit = prices[i] - minPrice;
    }
  }
  return maxProfit;
}

// int main() {
//   int prices[] = {7, 1, 5, 3, 6, 4};
//   printf("%d", maxProfit(prices, 6));
//   system("pause");
//   return 0;
// }
// @lc code=end
