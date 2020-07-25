/*
 * @Author: Qi Bo
 * @Date: 2020-07-09 23:40
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
 * @lc app=leetcode.cn id=203 lang=c
 *
 * [203] 移除链表元素
 *
 * https://leetcode-cn.com/problems/remove-linked-list-elements/description/
 *
 * algorithms
 * Easy (45.55%)
 * Likes:    408
 * Dislikes: 0
 * Total Accepted:    87.4K
 * Total Submissions: 190.8K
 * Testcase Example:  '[1,2,6,3,4,5,6]\n6'
 *
 * 删除链表中等于给定值 val 的所有节点。
 *
 * 示例:
 *
 * 输入: 1->2->6->3->4->5->6, val = 6
 * 输出: 1->2->3->4->5
 *
 *
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// struct ListNode {
//   int val;
//   struct ListNode *next;
// };

struct ListNode *removeElements(struct ListNode *head, int val) {
  struct ListNode *swap = malloc(sizeof(struct ListNode));
  swap->next = head;
  struct ListNode *tmp = head, *prev = swap;

  while (tmp != NULL) {
    if (tmp->val == val) {
      prev->next = tmp->next;
    } else {
      prev = tmp;
    }
    tmp = tmp->next;
  }
  head = swap->next;
  free(swap);
  return head;
}

// @lc code=end
