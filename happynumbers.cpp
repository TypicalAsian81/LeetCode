#include<bits/stdc++.h>
#include<stack>
using namespace std;

class Solution {
public:

    stack<int> arr;
    bool isHappy(int n) {
        int m;
        group(m,arr);
        int result=0;
        while(result!=1){
            for(int i=0; i<arr.size(); i++){
                result+=pow(arr.top(),2);
                arr.pop();
            }
            if(result!=1){
                group(result,arr);
            }else if(result==1){
                return true;
                break;
            }
        }

        return true;
    }

    void group(int n,stack<int> arr){
        while(n!=0){
           arr.push(n%10);
           n/=10;
        }
    }
};

int main(){
    Solution obj;
    obj.isHappy(5);

    return 0;
}