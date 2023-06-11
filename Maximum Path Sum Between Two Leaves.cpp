#include <bits/stdc++.h> 
/************************************************************

    Following is the Tree node structure
	
	template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
  long long int findMaxSumNodeToLeaf(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }

    long long int maxSumLeftPath = findMaxSumNodeToLeaf(root->left);
    long long int maxSumRightPath = findMaxSumNodeToLeaf(root->right);

    long long int maxSumFromNodeToLeaf = root->val + max(maxSumLeftPath, maxSumRightPath);

    return maxSumFromNodeToLeaf;
}


long long int findMaxSumPathViaNode(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return -1;
    }

    
    long long int maxPathSum = -1;

   
    long long int maxSumPathFromLeft = findMaxSumNodeToLeaf(root->left);
    
    long long int maxSumPathFromRight = findMaxSumNodeToLeaf(root->right);

    if (root->left != NULL && root->right != NULL)
    {
        long long int maxSumPathViaNode = maxSumPathFromLeft + maxSumPathFromRight + root->val;
        maxPathSum = max(maxPathSum, maxSumPathViaNode);
    }

    maxPathSum = max({maxPathSum, findMaxSumPathViaNode(root->left), findMaxSumPathViaNode(root->right)});

    return maxPathSum;
}

long long int findMaxSumPath(TreeNode<int> *root)
{
    return findMaxSumPathViaNode(root);
}
