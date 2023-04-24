class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                return i;
                break;
            }else{
                count++;
            }
        }
        int j=0;
        if(count==nums.size()){
            for(j=0; j<nums.size(); j++){
                if(nums[j]>=target){
                   nums.insert(nums.begin()+j-1,target);

                   break;
                }
            }
        }
        return j;    }
};