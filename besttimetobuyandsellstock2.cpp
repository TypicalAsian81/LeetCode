#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:

int maxProfit(vector<int>& prices) {
    
    // int profit = 0;
    int i=0;
    int profit=0;
    while(i!=(prices.size()-1)){

        for(int j=i+1; j<prices.size(); j++){
            if(prices[j]>prices[i]){
                profit += (prices[j]-prices[i]);
                i=j+1;
            }
            else if(j==(prices.size()-1)){
                i++;
                break;
            }
            else{
                continue; 
            }     
        }
    }
    return profit;

}

};

int main(){

    vector<int> prices{7,1,5,3,6,4};
    Solution obj;
    obj.maxProfit(prices);
    
    return 0;
}