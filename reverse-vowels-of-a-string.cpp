class Solution {
public:
    bool isvowel(char c)
    {
     c=tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }
    string reverseVowels(string s) {
        int j=s.size()-1;
        int i=0;
        while(i<j)
        {
            if(isvowel(s[i])&&isvowel(s[j]))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else{
                isvowel(s[i])?j--:i++;
            }
        }
       return s;
            
    }
};