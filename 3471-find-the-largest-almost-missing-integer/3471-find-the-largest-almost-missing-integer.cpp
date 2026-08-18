class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == n) {
            int max_val = -1;
            for (int x : nums) {
                max_val = std::max(max_val, x);
            }
            return max_val;
        }
        if (k == 1) {
            std::unordered_map<int, int> freq;
            for (int x : nums) {
                freq[x]++;
            }
            int ans = -1;
            for (auto& [val, count] : freq) {
                if (count == 1) {
                    ans = std::max(ans, val);
                }
            }
            return ans;
        }
        
        std::unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }
        
        int ans = -1;
        if (freq[nums[0]] == 1) {
            ans = std::max(ans, nums[0]);
        }
        if (freq[nums[n - 1]] == 1) {
            ans = std::max(ans, nums[n - 1]);
        }
        
        return ans;
    }
};