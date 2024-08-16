class Solution {
public:
int sum;
    void solve(TreeNode*root){
        if(root==NULL){
            return;
        }
        solve(root->right);
        sum+=root->val;
        root->val=sum;
        solve(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        sum=0;
        solve(root);
        return root;
    }
};
