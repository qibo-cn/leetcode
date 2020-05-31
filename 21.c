/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdio.h>
#include <stdlib.h>
// struct ListNode {
//   int val;
//   struct ListNode *next;
// };

struct ListNode *mergeTwoLists(struct ListNode *l1, struct ListNode *l2) {
  struct ListNode *newList = (struct ListNode *)malloc(sizeof(struct ListNode));
  struct ListNode *a, *b, *l;
  a = l1;
  b = l2;
  l = newList;
  while (a && b) {
    struct ListNode *n = (struct ListNode *)malloc(sizeof(struct ListNode));
    if (a->val >= b->val) {
      n->val = b->val;
      n->next = NULL;
      l->next = n;
      l = l->next;
      b = b->next;
    } else {
      n->val = a->val;
      n->next = NULL;
      l->next = n;
      l = l->next;
      a = a->next;
    }
  }
  l->next = a ? a : b;
  return newList->next;
}

// struct ListNode *mergeTwoLists(struct ListNode *l1, struct ListNode *l2) {
//   struct ListNode *l3 = (struct ListNode *)malloc(sizeof(struct ListNode)),
//   *t,
//                   *p, *q;
//   l3->next = NULL;
//   l3->val = 0;
//   p = l1;
//   q = l2;
//   t = l3;
//   while (p != NULL && q != NULL) {
//     struct ListNode *n = (struct ListNode *)malloc(sizeof(struct ListNode));
//     if (p->val <= q->val) {
//       n->val = p->val;
//       n->next = NULL;
//       t->next = n;
//       t = t->next;
//       p = p->next;
//     } else {
//       n->val = q->val;
//       n->next = NULL;
//       t->next = n;
//       t = t->next;
//       q = q->next;
//     }
//   }
//   while (p) {
//     struct ListNode *n = (struct ListNode *)malloc(sizeof(struct ListNode));
//     n->val = p->val;
//     n->next = NULL;
//     t->next = n;
//     t = t->next;
//     p = p->next;
//   }
//   while (q) {
//     struct ListNode *n = (struct ListNode *)malloc(sizeof(struct ListNode));
//     n->val = q->val;
//     n->next = NULL;
//     t->next = n;
//     t = t->next;
//     q = q->next;
//   }
//   return l3->next;
// }

// void add(struct ListNode *l, int val) {
//   if (!l->next) {
//     struct ListNode *node = (struct ListNode *)malloc(sizeof(struct
//     ListNode)); node->val = val; node->next = NULL; l->next = node;
//   } else {
//     add(l->next, val);
//   }
// }

// int main() {
//   struct ListNode *l1 = (struct NodeList *)malloc(sizeof(struct ListNode));
//   l1->val = -1;
//   l1->next = NULL;
//   add(l1, 1);
//   add(l1, 2);
//   add(l1, 3);

//   struct ListNode *l2 = (struct NodeList *)malloc(sizeof(struct ListNode));
//   l2->val = -1;
//   l2->next = NULL;
//   add(l2, 1);
//   add(l2, 2);
//   add(l2, 3);
//   struct ListNode *l = mergeTwoLists(l1, l2);
//   while (l) {
//     printf("%d ", l->val);
//     l = l->next;
//   }
//   system("pause");
//   return 0;
// }
// @lc code=end
