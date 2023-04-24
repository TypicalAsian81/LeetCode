#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void check(){
    string s1,s2,s3;
    int output=0;
    for(int i=0; i<ideas.size(); i++){
        for(int j=i+1; j<ideas.size(); j++){
            s1 = ideas[i];
            s2 = ideas[j];
            swap(s1[0],s2[0]);
            for(int k=0; k<ideas.size(); k++){
                if(s1 != ideas[k] && s2!= ideas[k]){
                   s3 = s1 + s2;
                   output++;
                }else{
                    continue;
                }
            }
        }
    }

}

int main(){

    vector<string> ideas{"coffee","donuts","time","toffee"};
    check();

    return 0;
}
