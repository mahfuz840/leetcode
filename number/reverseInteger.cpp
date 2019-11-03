class Solution {
public:
    int reverse(int x) {
        long num = 0;
        
        while(x != 0)
        {
            if(num*10>INT_MAX || num*10 < INT_MIN)
            {
                num = 0;
                break;
            }
            num = num*10 + x%10;
            x /= 10;
        }
        
        
        
        return (int)num;
    }
};
