class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> maxs;
        find(root, 0, maxs);
        return maxs;
    }

private:
    void find(TreeNode* node, int row, vector<int>& maxs) {
        if (!node) {
            return;
        }

        if (row >= maxs.size()) {
            maxs.push_back(node->val);
        }
        else {
            maxs[row] = max(maxs[row], node->val);
        }

        find(node->left, row + 1, maxs);
        find(node->right, row + 1, maxs);
    }
};