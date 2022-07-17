class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n,0));
        //memset(res,-1,n*n*sizeof(int));
        int top=0;
        int down=n-1;
        int left=0;
        int right=n-1;
        int dir=0;
        int p=1;
        while(top<=down && left<=right){
            if(dir==0){
                for(int i=left;i<=right;i++){
                    res[top][i]=p;
                    p++;
                }
                top++;
            }
            if(dir==1){
                for(int i=top;i<=down;i++){
                    res[i][right]=p;
                    p++;
                }
                right--;
            }
            if(dir==2){
                for(int i=right;i>=left;i--){
                    res[down][i]=p;
                    p++;
                }
                down--;
            }
            if(dir==3){
                for(int i=down;i>=top;i--){
                    res[i][left]=p;
                    p++;
                }
                left++;
            }
            dir=(dir+1)%4;
        }
        return res;
    }
};
