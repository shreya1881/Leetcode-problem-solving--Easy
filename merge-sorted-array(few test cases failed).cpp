
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        while(i<(nums1.size()+nums2.size()) && j<nums2.size())
        {
            if(nums1[i]!=0 && nums1[i]<=nums2[j])
            {
                i++;
            }
            else if(nums1[i]!=0 && nums1[i]>nums2[j])
            {
                nums1.insert(nums1.begin()+i,nums2[j]);
                i++;
                j++;
            }
            else if(nums1[i]==0)
            {
                nums1.insert(nums1.begin()+i,nums2[j]);
                i++;
                j++;
            }            
        }
        nums1.erase(
        std::remove(nums1.begin(), nums1.end(), 0),
        nums1.end());
    }
};