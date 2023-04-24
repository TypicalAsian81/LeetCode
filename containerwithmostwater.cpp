#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int area = 0;
        n = height.size();
        int a = 0;
        int b = n-1;
        int n = height.size();

        while(a<b && a<=n-1 && b>=0){

            int h = min(height[a],height[b]);
            area = max(area,h*(b-a));

            if(height[a]<height[b]){
                a++
            }else{
                b--;
            }
        }

    }
};

int main(){

    //input

    return 0;
}