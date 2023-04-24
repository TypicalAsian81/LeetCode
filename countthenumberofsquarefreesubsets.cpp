class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> output;

    void generate(vector<vector<int>> res,vector<int> nums,int index){
        vector<int> subset;
        res.push_back(subset);
        for(int i=index; i<nums.size(); i++){
           subset.push_back(nums[i]);
           generate(res,nums,i+1);
           subset.pop_back();
        }
    }

    int squareFreeSubsets(vector<int>& nums) {

        generate(res,nums,0);
        for(int i=0; i<res.size(); i++){
            for(int j=0; j<res[i].size(); j++){
                int count = 0;
                int product=1;
                while(count<res[i].size()){
                   product*=res[i][count];
                   count+=1;
                }
                if(product%nums[j]*nums[j]==0){
                    break;
                }
                else if(j==res[i].size()-1){
                    output.push_back(res[i]);
                }
            }
        }

        return output.size();
    }

};