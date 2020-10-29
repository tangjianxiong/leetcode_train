#include<stdio.h>

using namespace std;



struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int sumroot(TreeNode *node, int presum){
        if(node==NULL)
            return 0;
        int sum = presum*10 + node->val;
        if(node->left==NULL&&node->right==NULL)
            return sum;
        else
            return sumroot(node->left, sum) + sumroot(node->right, sum);
    }
    int sumNumbers(TreeNode* root)
    {
        return sumroot(root, 0);
    }
};