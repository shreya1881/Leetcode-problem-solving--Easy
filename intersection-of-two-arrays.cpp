class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int intersection1[1000] = {0};
        int intersection2[1000] = {0};
        
        for(int i = 0 ; i < nums1.size() ; i++){
            intersection1[nums1[i]]++;
        }
        
        for(int i = 0 ; i < nums2.size() ; i++){
            intersection2[nums2[i]]++;
        }
        
        for(int i = 0 ; i < 1000 ; i++){
            if(intersection1[i] >= 1 && intersection2[i] >=1){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};