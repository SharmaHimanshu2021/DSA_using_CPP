class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return nullptr;

        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        } 
        else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        } 
        else {
            
            if (!root->left) return root->right;  
            if (!root->right) return root->left;  
 
            TreeNode* temp = root->left;  
            while (temp->right) temp = temp->right; 
            root->val = temp->val;  
            root->left = deleteNode(root->left, temp->val);  
        }
        return root;
    }
};
