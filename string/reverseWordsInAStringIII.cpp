class Solution {
public:
    string reverseWords(string s) {
        int count = 0;
        for(int i = 0; i < s.length(); i++)
        {
            count = 0;
            while(s[i] != ' ' && i < s.length())
            {
                count++;
                i++;
            }
            
            reverse(s.begin()+i-count, s.begin()+i);
        }
        
        return s;
    }
};
