/*
 * @Author: Qi Bo
 * @Date: 2020-06-05 00:15
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
 * @lc app=leetcode.cn id=53 lang=c
 *
 * [53] 最大子序和
 */

// @lc code=start


int maxSubArray(int* nums, int numsSize){
    if (numsSize == 1) {
        return nums[0];
    }
    int res = nums[0];
    int sum = nums[0] ;
    for (int i = 0; i < numsSize; i ++) {
        sum =nums[i];
        for (int j = i + 1; j < numsSize; j++) 
        {
            sum += nums[j];
            if (sum > res) {
                res = sum;
            }
        }
    }
    for (int i = 0; i < numsSize; i++) {
        res = res < nums[i]? nums[i]:res;
    }

    return res;
}

// int main () {
//     int nums[] = {-2,1};
//     printf("%d ", maxSubArray(nums, 2));
//     system("pause");
//     return 0;
// }
// @lc code=end

