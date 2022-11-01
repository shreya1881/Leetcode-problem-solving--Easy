class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
      unordered_map<int,int>mp;
        vector<int>v;
        for(int x:nums)
        {
            mp[x]++;
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(mp[i]==0) v.push_back(i); 
        }
        return v;
    }
};