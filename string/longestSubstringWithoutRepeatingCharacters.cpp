class Solution {
public:
    
    unordered_map<char, int> mp;
    
    bool isHash(char ch)
    {
        if(mp.find(ch) == mp.end())
        {
            mp[ch]++;
            return false;
        }
        else
        {
            mp.clear();
            return true;
        }
    }
    
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int res = 0;
        int count = 0;
        
        for(int i = 0; i < s.length(); )
        {
            if(!isHash(s[i]))
            {
                count++;
                i++;
            }
            else
            {
                count = 0;
                left++;
                i = left;
            }
            res = max(res, count);
        }
        
        return res;
    }
};
