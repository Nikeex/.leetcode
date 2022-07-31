/*
 * @lc app=leetcode id=384 lang=cpp
 *
 * [384] Shuffle an Array
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int j = n;
        for(int i=0;i < n;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            j++;
        }
        return ans;
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
// @lc code=end

