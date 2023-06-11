bool solve(BinaryTreeNode<int>* &a,BinaryTreeNode<int>* &b){

    if(a==NULL and b==NULL) return true;
    if(a==NULL or b==NULL) return false;
    if(a->data!=b->data) return false;

    bool c=solve(a->left,b->right);
    bool d=solve(a->right,b->left);

    if(!c or !d) return false;
    else return true;
}

bool isSymmetric(BinaryTreeNode<int>* root)
{
    if(root==NULL) return true;
    solve(root->left,root->right);
}
