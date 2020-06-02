/*
 * @lc app=leetcode.cn id=28 lang=c
 *
 * [28] 实现 strStr()
 */

// @lc code=start
#include <string.h>

int strStr(char *haystack, char *needle) {
  int lh = strlen(haystack);
  int ln = strlen(needle);
  int s = 0;
  int flag = 0;
  if (lh < ln) {
    return -1;
  }
  if (ln == 0) {
    return 0;
  }
  int i, j;
  for (i = 0, j = 0; i < lh && j < ln;) {
    if (haystack[i] != needle[j]) {
      if (flag > 0) {
        i = i - flag + 1;
        flag = 0;
        j = 0;
        continue;
      } else {
        i++;
      }
    } else {
      s = i;
      flag++;
      i++, j++;
      if (flag == ln) {
        return s - flag + 1;
      } else {
        continue;
      }
    }
  }
  return -1;
}

// int main() {
//   printf("%d", strStr("mississippi", "issip"));
//   //   printf("%d", strStr("hello", "ll"));
//   system("pause");
//   return 0;
// }
// @lc code=end
