class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int i,j;
        int high,low;
        int max = nums[0];
        int min = nums[0];
        for(i=0; i<nums.size(); i++){
            if(nums[i]>max)
            high = i;
        }
        for(j=0; j<nums.size(); j++){
            if(nums[j]<min)
            low = j;
        }

        // int high = *max_element(nums.begin(),nums.end()); 
        // int low = *min_element(nums.begin(),nums.end()); 
        
        while(nums[high]>=nums[low]){
            if(nums[high]%2==0){
                nums[high]/=2;
            }else{
                nums[high]*=2;
            }
            if(nums[low]%2==0){
                nums[low]/=2;
            }else{
                nums[low]*=2;
            }
            minimumDeviation(nums);
        }
        int result = *max_element(nums.begin(),nums.end()) - *min_element(nums.begin(),nums.end());
        return result;
    }
};