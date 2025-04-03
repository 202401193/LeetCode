class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            // Use sets to track seen values for rows, columns, and sub-boxes
            unordered_set<string> seen;
            
            for (int i = 0; i < 9; i++) { // Loop through rows
                for (int j = 0; j < 9; j++) { // Loop through columns
                    char current = board[i][j];
                    
                    if (current != '.') { // Validate filled cells only
                        string rowKey = "row" + to_string(i) + current;
                        string colKey = "col" + to_string(j) + current;
                        string boxKey = "box" + to_string(i / 3) + to_string(j / 3) + current;
                        
                        // If any key is already seen, the board is invalid
                        if (seen.count(rowKey) || seen.count(colKey) || seen.count(boxKey)) {
                            return false;
                        }
                        
                        // Mark keys as seen
                        seen.insert(rowKey);
                        seen.insert(colKey);
                        seen.insert(boxKey);
                    }
                }
            }
            return true; // Valid board
        }
    };
    
            
    