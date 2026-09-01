class Solution {
public:
    bool checkTwoChessboards(const std::string& coordinate1, const std::string& coordinate2) {
        return (coordinate1[0] + coordinate1[1]) % 2 == (coordinate2[0] + coordinate2[1]) % 2;
    }
};