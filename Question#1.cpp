class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int size = original.size();
    
    // Check if it is possible to construct the 2D array
        if (size != m * n) {
            return vector<vector<int>>(); // Return an empty 2D array
        }
    
    // Create a 2D vector with m rows and n columns
        vector<vector<int>> result(m, vector<int>(n));
    
    // Iterate through the original array and assign elements to the 2D vector
        for (int i = 0; i < size; i++) {
            int row = i / n; // Calculate the row index
            int col = i % n; // Calculate the column index
            result[row][col] = original[i];
        }
    
        return result;
    }
};
