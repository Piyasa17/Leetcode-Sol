class Solution {
public:
    int evalRPN(vector<string>& a) {
        stack<string> s;
        int n=a.size();
        int res;
        for(int i=0;i<n;i++){
            if(!s.empty()){
                if(a[i]=="+" || a[i]=="-" || a[i]=="*" || a[i]=="/"){
                    int x=stoi(s.top());
                    s.pop();
                    int y=stoi(s.top());
                    s.pop();
                    if(a[i]=="+"){
                        res=x+y;
                        s.push(to_string(res));
                    }
                    if(a[i]=="/"){
                        res=y/x;
                        s.push(to_string(res));
                    }
                    if(a[i]=="-"){
                        res=y-x;
                        s.push(to_string(res));
                    }
                    if(a[i]=="*"){
                        res=x*y;
                        s.push(to_string(res));
                    }
                }
                else{
                    s.push(a[i]);
                }
            }
            else
                s.push(a[i]);
        }
        return stoi(s.top());
    }
};
