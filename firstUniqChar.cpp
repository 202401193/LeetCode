class Solution {
    public:
        int firstUniqChar(string s) {
            unordered_map<char, int> charCount; // Map to store character frequencies
            
            // Count frequency of each character in the string
            for (char c : s) {
                charCount[c]++;
            }
            
            // Find the first character with a count of 1
            for (int i = 0; i < s.size(); i++) {
                if (charCount[s[i]] == 1) {
                    return i; // Return the index of the first non-repeating character
                }
            }
            
            return -1; // If no non-repeating character exists
        }
    };
    