#include<bits/stdc++.h>
using namespace std;

vector<int> oddNum(int a,int b){
    vector<int> arr;
    for(int i=a; i<=b; i++){
        if(i%2 == 0){
           arr.push_back(i);
        }else{
            continue;
        }
    }

    for(int j=0; j<arr.size(); j++){
        cout << arr[j] << "";
    }

    return arr;
}

int main(){
    oddNum(3,7);
    return 0;
}