class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>output;
        if(root==NULL)return output;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int levelsize=q.size();
            vector<int>current;
            for(int i=0;i<levelsize;i++){
                TreeNode *node=q.front();
                q.pop();
                if(node->left!=NULL)
                     q.push(node->left);
                if(node->right!=NULL)
                     q.push(node->right);
                current.push_back(node->val);
            }
            output.push_back(current);
        }
        return output;
    }
};
