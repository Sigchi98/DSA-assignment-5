class Solution {
public:
    int distanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int distance = 0;

        for (int num1 : arr1) {
            bool found = false;

            for (int num2 : arr2) {
                if (abs(num1 - num2) <= d) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                distance++;
            }
        }

        return distance;
   }
};
