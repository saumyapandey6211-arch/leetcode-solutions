class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int totalPushes = 0;

        for (int i = 0; i < n; i++) {
            int pushesForChar = (i / 8) + 1;
            totalPushes += pushesForChar;
        }

        return totalPushes;
    }
};