class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0;
        int right = n - 1;
        int idx = n - 1;

        while (left <= right) {
            int squareLeft = nums[left] * nums[left];
            int squareRight = nums[right] * nums[right];

            if (squareLeft > squareRight) {
                result[idx] = squareLeft;
                left++;
            } else {
                result[idx] = squareRight;
                right--;
            }

            idx--;
        }
        return result;
    }
};
