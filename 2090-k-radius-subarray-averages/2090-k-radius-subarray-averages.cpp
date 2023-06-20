class Solution {
public:
    vector<int> getAverages(vector<int>& A, int k) {
        long N = A.size(), len = 2 * k + 1, sum = 0; // `len` is the length of the window
        vector<int> ans(N, -1);
        if (N < len) return ans; // If the array is too short to cover a window, return all -1s
        for (int i = 0; i < N; ++i) {
            sum += A[i]; // push A[i] into the window
            if (i - len >= 0) sum -= A[i - len]; // pop A[i-len], if any, out of window
            if (i >= len - 1) ans[i - k] = sum / len; // the center of this window is at `i-k`
        }
        return ans;
    }
};