class Solution {
    public:
    
        vector<int> twoSum(vector<int>& nums, int target) {
            for (int i = 0; i < nums.size(); i++) { // Corrected 'size.num()' to 'nums.size()'
                for (int j = i + 1; j < nums.size(); j++) {
                     // Added a nested loop to compare pairs of numbers
                    if (nums[i] + nums[j] == target) {
                         // Fixed 'sum[0] + sum[i]' to 'nums[i] + nums[j]'
                        return {i, j}; // Return the indices as a vector
                    }
                }
            }
            return {};
             // Return an empty vector if no solution is found
        }
    };