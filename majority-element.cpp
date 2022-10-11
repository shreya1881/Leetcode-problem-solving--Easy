class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0; i<mp.size(); i++)
        {
            if(mp[i]>nums.size()/2)
                return i;
        }
        return 0;
    }
    
};