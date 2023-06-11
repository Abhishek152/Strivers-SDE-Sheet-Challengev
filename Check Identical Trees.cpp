bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    
    if(root1==NULL and root2==NULL) return true;
    if(root1==NULL or root2==NULL) return false;
    if(root1->data!=root2->data) return false;

    bool l=identicalTrees(root1->left,root2->left);
    bool r=identicalTrees(root1->right,root2->right);

    if(!l or !r) return false;
    else return true;
}
