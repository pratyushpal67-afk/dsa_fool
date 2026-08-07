class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorR = start ^ goal;
        int count = 0;
        
        while(xorR > 0) {
            count += xorR & 1;
            xorR >>= 1;
        }
        return count;
    }
};