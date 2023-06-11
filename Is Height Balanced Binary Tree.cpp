int height(BinaryTreeNode<int>* root){
    if(root==NULL) return 0;

    int l=height(root->left);
    if(l==-1) return -1;
    int r=height(root->right);
    if(r==-1) return -1;

    if(abs(l-r)>1) return -1;

    return 1 + max(l,r);
}



bool isBalancedBT(BinaryTreeNode<int>* root) {
    if(height(root)!=-1) return true;
    else return false;
}

// TC : O(n)
// SC: O(n)
