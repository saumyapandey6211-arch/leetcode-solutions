class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        string half = "";
        char center = '\0';

        for (int i = 0; i < 26; ++i) {
            if (freq[i] % 2 != 0) {
                center = 'a' + i;
            }
            half.append(freq[i] / 2, 'a' + i);
        }

        string second_half = half;
        reverse(second_half.begin(), second_half.end());

        if (center != '\0') {
            return half + center + second_half;
        }
        return half + second_half;
    }
};