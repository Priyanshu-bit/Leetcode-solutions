class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int, int> m;
        
        // Count the occurrences of each number in the vector
        for (int num : arr) {
            m[num]++;
        }
        
        unordered_set<int> s;
        
        // Check if the occurrences are unique
        for (const auto& i : m) {
            if (s.count(i.second)) {
                return false;
            }
            s.insert(i.second);
        }
        
        return true;
    }
};