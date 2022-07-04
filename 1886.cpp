class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int p=4;
        while(p--){
            if(mat==target)
                return true;
            reverse(mat.begin(),mat.end());
            for(int i=0;i<mat.size();i++){
                for(int j=i+1;j<mat[0].size();j++)
                    swap(mat[i][j],mat[j][i]);
            }
        }
        return false;
    }
};
