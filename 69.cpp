class Solution {
public:
    int mySqrt(int x) {
        long long  i;
        if(x==1)
            return 1;
        for(i=1;i<=x/2;i++)
        {
            if(i*i<=x){
                if(i*i==x)
                  return i;
            }
            else
                break;
        }
        return i-1;
    }
};
