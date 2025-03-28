class Solution {
    public:
        bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
            stack<int> track;
            int j = 0;
    
            for (int val : pushed) {
                track.push(val);
                // Try to pop as long as the top matches popped[j]
                while (!track.empty() && track.top() == popped[j]) {
                    track.pop();
                    j++;
                }
            }
    
            return track.empty();
                
            
        }
    };