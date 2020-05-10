/*
 * @lc app=leetcode.cn id=13 lang=c
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
#include <stdio.h>
#include <string.h>

int main()
{

    char *s = "MCMXCIV";
    printf("%d\n", romanToInt(s));
    system("pause");
    return 0;
}

int romanToInt(char *s)
{
    int len = strlen(s);
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'I')
        {
            sum += 1;
        }
        if (s[i] == 'V') {
            sum += 5;
        }
        if (s[i] == 'X') {
            sum += 10;
        }
        if (s[i] == 'L') {
            sum += 50;
        }
        if (s[i] == 'C') {
            sum += 100;
        }
        if (s[i] == 'D') {
            sum += 500;
        }
        if (s[i] == 'M') {
            sum += 1000;
        }
    }
    if (strstr(s, "IV") || strstr(s, "IX")) {
        sum -= 2;
    }
    if (strstr(s, "XL") || strstr(s, "XC")) {
        sum -= 20;
    }
    if (strstr(s, "CD") || strstr(s, "CM")) {
        sum -= 200;
    }
    return sum;
}

// @lc code=end
