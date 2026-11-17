class Solution {
public:
    int reverse(int x) {
        if (x < INT_MAX || x > INT_MIN) {
            long long rev = 0;

            while (x != 0) {

                if(rev>INT_MAX/10){
                    return 0;
                }
                else if(rev<INT_MIN/10)
                {
                    return 0;
                }
                int a = x % 10;
                rev = rev * 10 + a;
                x = x / 10;
            }

            return rev;
        } else
            return 0;
    }
};