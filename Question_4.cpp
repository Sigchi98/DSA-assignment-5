class Solution {
public:
    vector<vector<int>> findDisjointArrays(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1(nums1.begin(), nums1.end());
        set<int> set2(nums2.begin(), nums2.end());

        vector<int> distinctNums1;
        vector<int> distinctNums2;

    // Find distinct integers in nums1 that are not present in nums2  
        for (int num : set1) {
            if (set2.find(num) == set2.end()) {
                distinctNums1.push_back(num);
            }
        }

    // Find distinct integers in nums2 that are not present in nums1
        for (int num : set2) {
            if (set1.find(num) == set1.end()) {
                distinctNums2.push_back(num);
            }
        }

        return {distinctNums1, distinctNums2};
    }
};
