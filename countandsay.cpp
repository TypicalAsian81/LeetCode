class Solution {
public:
    stack<string> myStack;
    myStack.push("1");
    int m=3;
    string countAndSay(int n) {
        int m=3;
        string s1,s2;
        s1=myStack.pop()
        int prev = s1[0];
        int count=0;
        int res;
        for(int i=1;i<s1.size(); i++){
            if[s1[i]==prev]{
                count++;
            }else{
                res+=to_string(count)+prev;
                prev=s1[i];
                count=1;
            }
        }
        res+=to_string(count)+prev;
        myStack.push(res);
        countAndSay(m);
        m++

        if(m==n){
            return res;
        }

        
    }
};