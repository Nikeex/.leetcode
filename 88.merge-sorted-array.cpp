/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> ar;
        int l = 0, r = 0;
        while (l < m && r < n)
        {
            if (nums1[l] < nums2[r])
            {
                ar.push_back(nums1[l]);
                l++;
            }
            else
            {
                ar.push_back(nums2[r]);
                r++;
            }
        }
        if (l != m)
        {
            while (l < m)
            {
                ar.push_back(nums1[l]);
                l++;
            }
        }
        if (r != n)
        {
            while (r < n)
            {
                ar.push_back(nums2[r]);
                r++;
            }
        }
        nums1.clear();
        for (auto it : ar)
            nums1.push_back(it);
    }
};
// @lc code=end
