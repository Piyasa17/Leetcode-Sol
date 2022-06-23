class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n=nums.size();
        if(n<3)
            return res;
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        for(int i=0;i<n-1;i++){
            int x=nums[i];
            int l=i+1;
            int h=n-1;
            while(l<h){
                if(x+nums[l]+nums[h]==0){
                    s.insert({x,nums[l],nums[h]});
                    l++;
                    h--;
                    //break;
                }
                else if(x+nums[l]+nums[h]<0)
                    l++;
                else
                    h--;
            }
        }
        for(auto x: s)
            res.push_back(x);
        return res;
    }
};
