class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        vector<string> temp;
        unordered_map<string,string> mp;
        for(int i=0; i<strs.size(); i++){
            permute(strs[i],0,strs[i].length()-1);
            for(int j=0; j<strs.size(); j++){
                if(mp.find(strs[j])!=mp.end()){
                    temp.insert(strs[j]);
                }
            }
            output.insert(temp);
            temp.clear();
            mp.clear();
        }
    }

    void permute(string s,int l,int r){
        for(int i=0; i<s.length(); i++){
         if(l==r){
             mp[s] = s;
         }else{
             swap(s[l],s[i]);
             permute(s,l+1,r);
             swap(s[l],s[i]);
         }

        }
    }
};