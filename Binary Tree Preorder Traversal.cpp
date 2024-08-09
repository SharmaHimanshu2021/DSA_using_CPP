class Solution {
public:
    vector<int> vc;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root !=NULL){
            vc.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
        return vc;
    }
};
