/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s,int i=0) {
        if(i==s.size()/2){
            return;
        }
        swap(s[i],s[s.size()-1-i]);
        i++;
        reverseString(s,i);
    }
};
// @lc code=end

