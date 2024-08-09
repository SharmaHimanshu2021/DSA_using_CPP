class Solution {
public:
    vector<int> vc;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root !=NULL){
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            vc.push_back(root->val);
        }
        return vc;
    }
};
