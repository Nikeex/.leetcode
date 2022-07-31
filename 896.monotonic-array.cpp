/*
 * @lc app=leetcode id=896 lang=cpp
 *
 * [896] Monotonic Array
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {

        bool increasing = true;
        bool decreasing = true;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
                increasing = false;
            if (nums[i] < nums[i + 1])
                decreasing = false;
        }
        return increasing || decreasing;
    }
};
// @lc code=end
