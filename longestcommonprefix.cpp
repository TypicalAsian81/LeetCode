#include<bits/stdc++.h>
using namespace std;

string commonPrefix(string& string1, string& string2){
    int len = min(string1.lenth(),string2.length());
    for (int i = 0; i < len; i++)
    {
        if (string1[i] != string2[i])
            break;
        result += string1[i];
    }
 
    return (result);
}
string commonPrefixUtil(string arr[]){
    string prefix = arr[0];
    for(int i=0; i<arr.length(); i++){
        commonPrefix(prefix,arr[i]);
    }
    return prefix;
}
int main(){
    string arr[] = ["flower","flow","flight"];
    
    return 0;
}