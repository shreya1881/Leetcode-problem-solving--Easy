class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector<int>v;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]%2==0 && nums[i]%3==0){
                v.push_back(nums[i]);
            }
        }
        int k=accumulate(v.begin(),v.end(),0);
        if(v.size()==0)
            return 0;
        else
        return  k/v.size();
    }
};