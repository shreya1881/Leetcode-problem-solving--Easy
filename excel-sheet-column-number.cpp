class Solution {
public:
    int titleToNumber(string columnTitle) {
         int n = columnTitle.length();
        int power = n - 1;
        //initializing answer
        int ans = 0, i = 0;
        while(i < n){
            // ASCII Code of A = 65
            int ch = columnTitle[i] - 64;
            ans += pow(26, power--)*ch;
            i++;
        }
        
        return ans;
    }
};