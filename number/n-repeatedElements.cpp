class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        map<int, int> mp;
        for(int i = 0; i < A.size(); i++)
        {
            if(mp[A[i]])
                return A[i];
            mp[A[i]]++;
        }
        return -1;
    }
};
