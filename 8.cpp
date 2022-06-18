class Solution {
public:
    int myAtoi(string s) {
        long sum=0;
        int count=0;
        int f=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')))
                return sum;
            if(s[i]>='0' && s[i]<='9'){
                sum=sum*10+int(s[i]-'0');
                f=1;
            }
            else if(s[i]=='-' && count==0){
                count++;
            }
            if(sum<INT_MIN)
                return INT_MIN;
            else if(sum>INT_MAX)
                return INT_MAX;
        }
        if(count==1)
            return (0-sum);
        return sum;
    }
};
