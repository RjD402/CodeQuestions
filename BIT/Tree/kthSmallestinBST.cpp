// https://leetcode.com/problems/kth-smallest-element-in-a-bst/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* temp;
        stack<TreeNode* > s;
        while(root || !s.empty()){
            
            while(root){
                s.push(root);
                root = root->left;
            }
            
            root = s.top();
            s.pop();
            if(--k==0)break;
            root=root->right;
        }
        return root->val;
    }
};