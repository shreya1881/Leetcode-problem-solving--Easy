class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
    
    for(int i=1; i<=numRows; i++)
    {
        vector<int> tmp;
        if(i==1)
        {
            tmp.push_back(1);
        }
        else
        {
            tmp.push_back(1);
            
            for(int j=1; j<=i-2; j++)
            {

                tmp.push_back(ans[i-2][j]+ans[i-2][j-1]);
            }
            
            tmp.push_back(1);
        }
        
        ans.push_back(tmp);
    }
        return ans;
    }
};