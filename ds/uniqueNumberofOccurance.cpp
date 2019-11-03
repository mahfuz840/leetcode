class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int freq[2001] = {0};
        map<int, int> mp;
        
        for(int i = 0; i < arr.size(); i++)
            freq[arr[i]+1000]++;
       
        for(int i = 0; i < 2001; i++)
            if(freq[i] != 0)
            {
                mp[freq[i]]++;
                // cout << i << " " << mp[freq[i]] << endl;
                if(mp[freq[i]] > 1)
                    return false;
            }
        
        return true;
    }
};
