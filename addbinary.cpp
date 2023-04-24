#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int l = min(a.size(),b.size());
        int h = max(a.size(),b.size());
        int result[h+1];
        string c;
        int carry=0;
        int k=0;
        for(int i=0; i<l; i++){
                result[i] = a[i]+b[i];
                if(result[i]=2 && carry=0){
                    result[i]=0;
                    carry=1;
                    
                }else if(result[i]=1 && carry=1){
                    result[i]=0;
                    carry=1;
                }else if(result[i]=2 && carry=1){
                    result[i]=1;
                    carry=1;
                }
        }

        if(carry=1){
            result[h+1]=1;
        }else{
            result[h+1]=0;
        }

        for(int j=h+1; j>0; j--){
            c[k]=result[j];
        }

        return c;
    }
};

int main(){
    string a = "11";
    string b = "1";

    Solution obj;
    obj.addBinary(a,b);

}