class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> output;
        vector<int> answer;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                int l=j+1;
                int r=nums.size()-1;
                while(l<r){
                    long long int sum = nums[i];
                    sum+=nums[j];
                    sum+=nums[l];
                    sum+=nums[r];
                if(sum == target){
                    output.insert({nums[i],nums[j],nums[l],nums[r]});
                    l++;
                    r--;
                }else if(sum < target){
                    l++
                }else if(sum > target){
                    r--;
                }
                }
            }
        }
        for(auto quadruplets : output)
            answer.push_back(quadruplets);
        return answer;
        
    }
};