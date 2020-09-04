struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
void visit_path(TreeNode *root, char **paths, int *returnSize, int *sta, int top)
{
    if (root != NULL)
    {
        if (root->left == NULL && root->right == NULL)
        { // 当前节点是叶子节点
            char *tmp = (char *)malloc(1001);
            int len = 0;
            for (int i = 0; i < top; i++)
            {
                len += sprintf(tmp + len, "%d->", sta[i]);
            }
            sprintf(tmp + len, "%d", root->val);
            paths[(*returnSize)++] = tmp; // 把路径加入到答案中
        }
        else
        {
            sta[top++] = root->val; // 当前节点不是叶子节点，继续递归遍历
            construct_paths(root->left, paths, returnSize, sta, top);
            construct_paths(root->right, paths, returnSize, sta, top);
        }
    }
}
char **binaryTreePaths(struct TreeNode *root, int *returnSize)
{
    char res[100][100];
}