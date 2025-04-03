class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            if (nums.empty()) return 0; // Handle edge case if the input is empty
            
            // Sort the array to bring consecutive elements together
            sort(nums.begin(), nums.end());
            
            int longest = 1; // Initialize longest sequence length
            int currentStreak = 1; // Initialize current streak
            
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] != nums[i - 1]) { // Skip duplicates
                    if (nums[i] == nums[i - 1] + 1) { // Check for consecutive elements
                        currentStreak++; // Extend the current streak
                    } else {
                        longest = max(longest, currentStreak); // Update the longest streak
                        currentStreak = 1; // Reset the current streak
                    }
                }
            }
            
            return max(longest, currentStreak); // Return the maximum streak length
        }
    };
    
    