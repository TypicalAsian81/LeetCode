#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k){
        int n=num.size();
        vector<int> output;
        string s;


        int val;
        int l;
        int res=0;
        for(int i=0; i<n; i++){
            s[i] = num[i];
        }

        for (int i = 0; s[i] != '\0'; ++i){
        res = res*10 + (s[i]  - 0);
        }
        val = (res+k);
        while(val!=0){
            output.emplace(output.begin(),val%10);
            val/=10;
        }

        return output;


    }


};


};

int main(){

    return 0;
}