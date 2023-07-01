class Solution {
public:
    int arrangeCoins(int n) {
        int completeRows = 0;
        int coinsNeeded = 1;

        while (n >= coinsNeeded) {
            n -= coinsNeeded;
            coinsNeeded++;
            completeRows++;
        }

        return completeRows;
    }
};
