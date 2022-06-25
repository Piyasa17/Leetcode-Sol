class Solution {
public:
    string reverseWords(string q) {
    int n1=q.size();
    string s="";
    int a;
    int x=0;
    for(int i=n1-1;i>=0;i--){
        if(q[i]==' ')
            x++;
        else 
            break;
    }
    for(a=0;a<n1;++a){
        if(q[a]!=' '){
            s+=q[a];
            break;
        }
    }
    int y=1;
    for(int j=a+1;j<n1-x;j++){
        if(q[j]!=' '){
            s+=q[j];
            y=1;
        }
        else{  
            if(y==1){
                s+=q[j];
                y++;
            }       
        }
    }
    int n=s.size();
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]==' ')
            c++;
    }
    //return s;
    int count=0;
    string p;
    if(c==0)
        p="";
    else
        p=" ";
    string res="";
    for(int i=n-1;i>=0;i--){
        if(s[i]!=' ')
            p+=s[i];
        else{
            count++;
            reverse(p.begin(),p.end());
            res+=p;
            if(count==c)
                p="";
            else
                p=" ";
        }
    }
    reverse(p.begin(),p.end());
    res+=p;
    return res;
}

};
