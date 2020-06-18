/*
 * @Author: Qi Bo
 * @Date: 2020-06-10 00:08
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
 * @lc app=leetcode.cn id=83 lang=c
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *deleteDuplicates(struct ListNode *head) {
  struct ListNode *pCurrentNode = head;
  struct ListNode *pNextNode = head;
  if (NULL == head)
    return head;

  pNextNode = pCurrentNode->next;
  while (pCurrentNode->next != NULL) {
    if (pCurrentNode->val == pNextNode->val) {
      struct ListNode *tmp = pNextNode->next;
      free(pNextNode);
      pNextNode = tmp;
      pCurrentNode->next = pNextNode;
    } else {
      pCurrentNode = pCurrentNode->next;
      pNextNode = pNextNode->next;
    }
  }
  return head;
}

// @lc code=end
