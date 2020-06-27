/*
 * @Author: Qi Bo
 * @Date: 2020-06-20 22:16
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
 * @lc app=leetcode.cn id=155 lang=c
 *
 * [155] 最小栈
 */

// @lc code=start

#include <stdbool.h>
#include <stdio.h>

typedef struct MinStack {
  int val;
  int min;
  struct MinStack *next;
} MinStack;

/** initialize your data structure here. */
MinStack *minStackCreate() {
  MinStack *node = (MinStack *)malloc(sizeof(MinStack));
  node->next = NULL;
  node->min = 2147483647;
  return node;
}

void minStackPush(MinStack *obj, int x) {
  MinStack *node = (MinStack *)malloc(sizeof(MinStack));
  node->val = x;
  node->next = obj->next;
  node->min = x > obj->min ? obj->min : x;
  obj->min = node->min;
  obj->next = node;
}

void minStackPop(MinStack *obj) {
  MinStack *node;
  node = obj->next;
  obj->next = obj->next->next;
  if (obj->next) {
    obj->min = obj->next->min;
  } else {
    obj->min = 2147483647;
  }
  free(node);
}

int minStackTop(MinStack *obj) {
  if (!obj->next) {
    return false;
  }
  return obj->next->val;
}

int minStackGetMin(MinStack *obj) {
  if (!obj->next) {
    return false;
  }
  return obj->min;
}

void minStackFree(MinStack *obj) {

  while (obj->next) {
    minStackPop(obj);
    if (!obj->next)
      break;
    obj->next = obj->next->next;
  }
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, x);

 * minStackPop(obj);

 * int param_3 = minStackTop(obj);

 * int param_4 = minStackGetMin(obj);

 * minStackFree(obj);
*/

// int main() {
//   MinStack *obj = (MinStack *)malloc(sizeof(MinStack));
//   obj = minStackCreate();
//   minStackPush(obj, -2);
//   minStackPush(obj, 0);
//   minStackPush(obj, -3);
//   printf("%d ", minStackGetMin(obj));
//   system("pause");
//   return 0;
// }
// @lc code=end
