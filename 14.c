/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start
#include <string.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    int flag = 1;
    if (strsSize == 0 ) {
        return "";
    }
   for (int i = 0; i < strlen(strs[0]) && flag; i ++) {
       for (int j = 1; j < strsSize; j++)
       {
           if (strs[0][i] != strs[j][i]) {
                strs[0][i] = '\0';
                flag = 0;
                break;
           } 
       }
       
   }
   return strs[0];
   
}
int main () {
    char *strs[] = {"flower","flow","flight"};
    char * ret = longestCommonPrefix(strs, 3);
    printf("%s", ret);
    system("pause");
    return 1;
}

// @lc code=end

