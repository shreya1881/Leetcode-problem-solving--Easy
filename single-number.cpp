class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int k;
        for(auto it: mp)
        {
            if(it.second==1)
            {
                k=it.first;
                break;
            }
        }
        return k;
    }
};