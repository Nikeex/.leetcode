/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int firstPos(vector<int>& nums , int target){
          int start=0 ,end=nums.size()-1,ans= -1,mid;
        while (start<=end){
             mid = start + ((end-start)/2);
            if(nums[mid]==target)
            {
                ans=mid;
                end=mid-1;
            }       
            else if(nums[mid]>target){
                end=mid-1;
            }
                else
                    start=mid+1;
            }
        
        return ans;
    }
    
    int lastPos(vector<int>& nums,int target){
          int start=0 ,end = nums.size()-1,ans= -1,mid;
        while(start<=end){
             mid = start + ((end-start)/2);
            if(nums[mid]==target){
                ans=mid;
                start=mid+1;
            }
            else if(nums[mid]>target)
                end = mid-1;
            
                else 
                    start=mid+1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
      
        vector<int> ans;
        int first = firstPos(nums,target);
        int last  = lastPos (nums,target); 
        ans.push_back(first);
        ans.push_back(last) ;
        return ans;
    }
};
// @lc code=end

