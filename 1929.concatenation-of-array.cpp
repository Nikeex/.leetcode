/*
 * @lc app=leetcode id=1929 lang=cpp
 *
 * [1929] Concatenation of Array
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> ans = nums;
        for (auto it : nums)
        {
            ans.push_back(it);
        }

        return ans; 
    }
};
// @lc code=end
