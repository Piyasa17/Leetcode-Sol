class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        if(n==1){
            return nums;
        }
        sort(nums.begin(),nums.end());
        int c=1;
        int i;
        for(i=0;i<n-1;i++){
            if(nums[i]==nums[i+1])
                c++;
            else{
                if(c>(n/3))
                    res.push_back(nums[i]);
                c=1;
            }
        }
        if(c>(n/3))
            res.push_back(nums[i]);
        return res;
    }
};
