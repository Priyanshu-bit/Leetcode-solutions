class Solution {
public:
     bool buddyStrings(string A, string B) {
        if (A.size() != B.size()) return false;
        int diff1 = -1, diff2 = -1;
        unordered_set<char> A_letters;
        for (int i = 0; i < A.size(); i++) {
            if (A[i] != B[i]) {
                if (diff1 == -1)
                    diff1 = i;
                else if (diff2 == -1)
                    diff2 = i;
                else
                    return false; // More than 2 different places between A & B
            }
            A_letters.insert(A[i]);
        }
        if (diff1 != -1 && diff2 != -1) // There are 2 different places
            return A[diff1] == B[diff2] && A[diff2] == B[diff1]; 
        if (diff1 != -1) // Only have 1 different place
            return false;
        return A_letters.size() < A.size(); // No different between A & B, check if A contains at least 1 duplicate letters.
    }
};