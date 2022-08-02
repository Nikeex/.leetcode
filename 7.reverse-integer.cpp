/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
#include <iostream>
using namespace std;
class Solution {
public:

int reverse(int x) {
        int i;
        long long rev=0; 
        while(x!=0) {
            rev = (rev*10) + (x%10);
            x = x/10;
        }
        if(abs(rev) > INT_MAX)
            return 0;
        return rev;
    }
};
// @lc code=end

