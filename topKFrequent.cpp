class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int, int> freqMap; // Map to store frequencies of each element
            
            // Count the frequency of each element in nums
            for (int num : nums) {
                freqMap[num]++;
            }
            
            // Create a max heap (priority queue) of pairs (frequency, element)
            priority_queue<pair<int, int>> maxHeap;
            for (auto& entry : freqMap) {
                maxHeap.push({entry.second, entry.first}); // Push frequency first for sorting
            }
            
            vector<int> result;
            // Extract the k most frequent elements
            for (int i = 0; i < k; i++) {
                result.push_back(maxHeap.top().second);
                maxHeap.pop();
            }
            
            return result; // Return the result
        }
    };
    