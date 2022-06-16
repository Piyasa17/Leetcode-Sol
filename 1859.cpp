class Solution {
public:
    string sortSentence(string s) {
        int n=s.size();
        int c=1;
        for(int i=0;i<n;i++){
            if(s[i]==' ')
                c++;
        }
        string p="";
        string arr[c];
        for(int i=0;i<n;i++){
            if(s[i]>='1' && s[i]<='9'){
                arr[int(s[i]-'0')-1]=p;
                p="";
            }
            else if(s[i]==' ')
                continue;
            else
                p=p+s[i];
        }
        string r="";
        for(int i=0;i<c;i++){
            r=r+arr[i];
            if(i!=c-1)
                r=r+' ';
        }
        return r;
    }
};
