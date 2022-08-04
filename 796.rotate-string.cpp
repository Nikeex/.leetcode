/*
 * @lc app=leetcode id=796 lang=cpp
 *
 * [796] Rotate String
 */

// @lc code=start
#include<iostream>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        
        string str = s;
        
        for(int i = 0; i<s.size(); i++){
            if(str == goal) return true;    
            else{
                char ch = s[i];
                str.erase(str.begin());       
                str += ch;                        
            }
        }
        return false;
    }
};
// @lc code=end

