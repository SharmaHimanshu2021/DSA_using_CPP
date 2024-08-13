#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/


void reverseInorder(TreeNode<int>* root, vector<int> &v) {
    if (root != NULL) {
        reverseInorder(root->right, v);
        v.push_back(root->data);
        reverseInorder(root->left, v);
    }
}

int KthLargestNumber(TreeNode<int>* root, int k) 
{
    vector<int> v;
    reverseInorder(root, v);
    if (k <= v.size()) {
        return v[k-1];
    } else {
        return -1; 
    }
}
