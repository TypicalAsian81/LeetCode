#include<bits/stdc++.h>

using namespace std;

class sum{
    public:

int triplet(int arr[]){

    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            for(int k=j+1; k<nums.size(); k++){
                int result = nums[i] + nums[j] + nums[k];
            if(result = 0){
                return i,j,k;
            }
            }
        }
    }
}
};

int main(){
    int nums[] = {-1,0,1,2,-1,-4};
    sum.obj->triplet(nums[]);

    return 0;
}
