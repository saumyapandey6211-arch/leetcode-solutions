class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int totalElements = m * n;
        
        k = k % totalElements;
        if (k == 0) return grid;
        
        
        std::vector<std::vector<int>> result(m, std::vector<int>(n));
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                
                int current1D = i * n + j;
                
                
                int new1D = (current1D + k) % totalElements;
                
                
                int newRow = new1D / n;
                int newCol = new1D % n;
                
                result[newRow][newCol] = grid[i][j];
            }
        }
        
        return result;
        
    }
};