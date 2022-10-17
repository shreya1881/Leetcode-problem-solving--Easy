class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26]={0};
        for(int i=0; i<sentence.size(); i++)
        {
            arr[sentence[i]-97]++;
        }
        for(int j=0; j<26;j++)
        {
            if(arr[j]==0)
            {
                return false;
                break;
            }
        }
        return true;
    }
};