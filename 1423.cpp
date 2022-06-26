class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int max=0;
        for(int i=0;i<k;i++)
            max+=cardPoints[i];
        int sum=max;
        for(int i=0;i<k;i++){
            sum=sum+cardPoints[n-i-1]-cardPoints[k-i-1];
            if(sum>max)
                max=sum;
        }
        return max;
    }
};
