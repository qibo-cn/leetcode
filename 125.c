
/*
 * @lc app=leetcode.cn id=125 lang=c
 *
 * [125] 验证回文串
 */

// @lc code=start
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char *s) {
  int len = strlen(s);
  if (len == 1)
    return true;

  char *tmp = (char *)malloc(sizeof(char) * len);
  for (int i = 0; i < len; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      tmp[i] = s[i] + 32;
    } else {
      tmp[i] = s[i];
    }
  }
  for (int i = 0, j = len - 1; i < len && j >= 0;) {
    if (('a' > tmp[i] || tmp[i] > 'z') && ('0' > tmp[i] || tmp[i] > '9')) {
      i++;
      continue;
    }
    if (('a' > tmp[j] || tmp[j] > 'z') && ('0' > tmp[j] || tmp[j] > '9')) {
      j--;
      continue;
    }
    if (tmp[i] != tmp[j]) {
      return false;
    }
    i++;
    j--;
  }
  return true;
}

// int main() {
//   char *s = "0p";
//   printf("%d ", isPalindrome(s));
//   system("pause");
//   return 0;
// }
// @lc code=end
