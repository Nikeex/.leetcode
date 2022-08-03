/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
class Solution {
public:
    
    void ans_(set<vector<int>>& ar, vector<int>& nums, int i, vector<int>& a)
    {
        if(i == nums.size()){
            sort(a.begin(), a.end());
            ar.insert(a);
            return;
        }
        vector<int> a1 = a, a2 = a;
        a1.push_back(nums[i]);
        ans_(ar, nums, i + 1, a1);
        ans_(ar, nums, i + 1, a2);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ar;
        vector<int> a;
        ans_(ar, nums, 0, a);
        vector<vector<int>> a1;
        for(auto it: ar)
            a1.push_back(it);
        return a1;      
    }
};
// @lc code=end

