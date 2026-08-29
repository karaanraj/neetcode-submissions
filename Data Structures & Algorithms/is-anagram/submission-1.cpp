class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        sort(s.begin(),s.end());
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            ans.push_back(s[i]);
        }
        sort(t.begin(),t.end());
        vector<int>an;
         for(int j=0;j<t.size();j++){
            an.push_back(t[j]);
        }
        if(an==ans) {
            return true;
        }
        return false;


    }
};
