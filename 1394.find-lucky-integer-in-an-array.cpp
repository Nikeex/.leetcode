/*
 * @lc app=leetcode id=1394 lang=cpp
 *
 * [1394] Find Lucky Integer in an Array
 */

// @lc code=start
#include<iostream>
#include<map>
#include<vector>
using namespace std;
class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> mp;
        int n = arr.size();
        for(int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        int res = -1;
        for(auto it: mp)
        {
            if(it.second == it.first)
                res = it.first;
        }
        return res;
    }
};
// @lc code=end

