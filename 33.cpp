class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int l=nums.size();
        int right=l-1;
        if(l==1)
        {
            if(nums[0]==target)
                return 0;
        }
        while(left<=right && l!=1)
        {
            int mid=(left+right)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[left]<=nums[mid])
            {
                if(target<nums[mid] && target>=nums[left])
                {
                    right=mid-1;
                }
                else
                    left=mid+1;
            }
            else
            {
                 if(target>nums[mid] && target<=nums[right])
                     left=mid+1;
                 else
                     right=mid-1;
            }
        }
        return -1;
    }
};
