class Solution {
public:
    string addBinary(string a, string b) {
        int n1=a.size();
        int n2=b.size();
        int n=max(n1,n2);
        
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        
        a.resize(n,'0');
        b.resize(n,'0');
        
        int sum,c;
        string res="";
        for(int i=0;i<n;i++){
            int p=int(a[i]-'0');
            int q=int(b[i]-'0');
            sum= p ^ q ^ c;
            c= (p & q) | (q & c) | (p & c);
            char x=sum+'0';
            res+=x;
        }
        if(c==1){
            char x=c+'0';
            res+=x;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
