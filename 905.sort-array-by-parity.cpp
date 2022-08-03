/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */

// @lc code=start
#include<iostream>
#include<vector>
#include<list>
using namespace std; 
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        list<int> a;
        for(auto it: nums)
        {
            if(it % 2)
                a.push_back(it);
            else
                a.push_front(it);
        }
        nums.clear();
        for(auto it: a)
            nums.push_back(it);
        return nums;
    }
};
// @lc code=end

