#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        string s="";
        string temp;
        for(int i=0; i<nums.size(); i++){
            temp = to_string(nums[i]);
            arr.push_back(temp);
            temp.clear();
            cout << arr[i];
        }
        

        sort(arr.begin(),arr.end());
        
        for(int j=0; j<arr.size(); j++){
            // cout << arr.back();
            s+=arr.back();
            arr.pop_back();
        }

        return s;
        // for(int j=0; j<arr.size()-1; j++){
        // if(lexicographical_compare(arr[j].begin(),arr[j].end(),arr[j+1].begin(),arr[j+1].end())){
        //      swap(arr[j],arr[j+1]);
        // }
        // }
    }
};

int main() {
    vector<int> nums{3,30,34,5,9};
    Solution obj;
    obj.largestNumber(nums);
    return 0;
}