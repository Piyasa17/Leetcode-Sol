class Solution {
    static bool sortcol( const vector<int>& v1, const vector<int>& v2 ) {
        return v1[1] > v2[1];
    }
public:
    int maximumUnits(vector<vector<int>>& a, int k) {
        sort(a.begin(),a.end(),sortcol);
        int n=a.size();
        vector<int> aux;
        int m=k;
        int i;
        for(i=0;i<n;i++){
            if(a[i][0]>m)
                break;
            aux.push_back(a[i][0]);
            m=m-a[i][0];
        }
        if(i<n)
            aux.push_back(m);
        int res=0;
        for(int j=0;j<aux.size();j++)
            res+=aux[j]*a[j][1];
        return res;
    }
};
