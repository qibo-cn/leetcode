
/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] 两数相加
 *
 * https://leetcode-cn.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (37.49%)
 * Likes:    4603
 * Dislikes: 0
 * Total Accepted:    481K
 * Total Submissions: 1.3M
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * 给出两个 非空
 * 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
 *
 * 如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
 *
 * 您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
 *
 * 示例：
 *
 * 输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
 * 输出：7 -> 0 -> 8
 * 原因：342 + 465 = 807
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

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
  struct ListNode *t1, *t2, *ret;
  t1 = l1;
  t2 = l2;
  int tmp = 0;
  struct ListNode *res = (struct ListNode *)malloc(sizeof(struct ListNode));
  ret = res;
  while ((t1->next != NULL) && (t2->next != NULL)) {
    res->val = t1 == NULL ? 0 : t1->val + t2 == NULL ? 0 : t2->val + tmp;
    if (res->val >= 10) {
      tmp = res->val / 10;
      res->val = res->val % 10;
    }
    res->next = (struct ListNode *)malloc(sizeof(struct ListNode));
    t1 = t1->next;
    t2 = t2->next;
    res = res->next;
  }
  return ret;
}

// @lc code=end
