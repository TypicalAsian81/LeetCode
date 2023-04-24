class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
    int result=0;
    int count=0;
        for(int i=0; i<nums.size(); i++){
            result+=nums[i];
            count++;
        if(result%k==0 && count>=2){
            break;
        }
        else{
            continue;
        }
        }

        return true;
    }
};