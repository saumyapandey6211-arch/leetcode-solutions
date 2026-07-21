class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int initialOnes = 0;
        vector<int> zeroGroupLengths;
        
        int n = s.length();
        int i = 0;
        
        
        while (i < n) {
            if (s[i] == '1') {
                while (i < n && s[i] == '1') {
                    initialOnes++;
                    i++;
                }
            } else {
                int zeroCount = 0;
                while (i < n && s[i] == '0') {
                    zeroCount++;
                    i++;
                }
                zeroGroupLengths.push_back(zeroCount);
            }
        }
        
        
        int maxGain = 0;
        for (size_t j = 0; j + 1 < zeroGroupLengths.size(); ++j) {
            maxGain = max(maxGain, zeroGroupLengths[j] + zeroGroupLengths[j + 1]);
        }
        
        return initialOnes + maxGain;
    }
};