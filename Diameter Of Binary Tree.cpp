#include<bits/stdc++.h>
int height(TreeNode<int> * root , int &maxi){
        if(root==NULL) return 0;
        
        
        
        int l=height(root->left, maxi);
        int r=height(root->right, maxi);
        
         maxi=max(maxi,l+r);
        
        return 1+max(l,r);
    }

int diameterOfBinaryTree(TreeNode<int> *root)
{
	if(root==NULL) return 0;
        int maxi=INT_MIN;
        height(root,maxi);
        return maxi;
}


// TC: O(n)
// SC: O(n) -> If in worst case it is a skew tree.
