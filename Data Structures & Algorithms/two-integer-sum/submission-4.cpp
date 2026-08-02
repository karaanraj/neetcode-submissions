class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
        unordered_map<int,int>mp;
        vector<int>ans;

        for(int i=0;i<arr.size();i++){
           int first=arr[i];
           int second=tar-first;
           if(mp.find(second)!=mp.end()){
              ans.push_back(mp[second]);
            ans.push_back(i);
          
           break;
           }
           mp[first]=i;
        }
        return ans;
        
        
    }
};
