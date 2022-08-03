/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    
    void ans_(vector<vector<int>>& ar, vector<int>& nums, int i, vector<int>& a)
    {
        if(i == nums.size()){
            ar.push_back(a);
            return;
        }
        vector<int> a1 = a, a2 = a;
        a1.push_back(nums[i]);
        ans_(ar, nums, i + 1, a1);
        ans_(ar, nums, i + 1, a2);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ar;
        vector<int> a;
        ans_(ar, nums, 0, a);
        return ar;
    }
};
// @lc code=end

