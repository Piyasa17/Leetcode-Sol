
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool isValid(string x)
    {
        // Your code here
        stack<char> s;
        int n=x.size();
        s.push(x[0]);
        for(int i=1;i<n;i++){
            if(!s.empty()){
                int p=int((x[i]-'0')-(s.top()-'0'));
                if(p==1 || p==2)
                    s.pop();
                else
                    s.push(x[i]);
            }
            else
                s.push(x[i]);
        }
        if(s.empty())
            return true;
        return false;
    }

};
