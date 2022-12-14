/*
 * @lc app=leetcode id=561 lang=cpp
 *
 * [561] Array Partition
 */

// @lc code=start
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i=i+2)
        {
            sum = sum + nums[i];
        }
        return sum;
    }
};
// @lc code=end

