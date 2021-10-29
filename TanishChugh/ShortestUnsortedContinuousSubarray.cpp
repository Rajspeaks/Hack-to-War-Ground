//https://leetcode.com/problems/shortest-unsorted-continuous-subarray/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        int left=0;
        int right=nums.size()-1;
        int temp=left;
        
        while (left<=right)
        {
            if(left==right)
            {
                return 0;
            }
            
            if(nums[left]<nums[left+1])
            {
                left++;
                temp=left;
            }
            
            else if(nums[left]==nums[left+1])
            {
                left++;
            }
            
            else
            {
                break;
            }
        }
        
        int temp2=right;
        
        while(left<=right)
        {
            if(left==right)
            {
                return 0;
            }
            
            if(nums[right]>nums[right-1])
            {
                right--;
                temp2=right;
            }
            else if(nums[right]==nums[right-1])
            {
                right--;
            }
            
            else
            {
                break;
            }
        }
        
        return temp2-temp+1;
    }
};

/*
Input
[2,6,4,8,10,9,15]

Output
5
*/