#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    vector<int>ans;
    	if(root==NULL) return ans;
    	queue<BinaryTreeNode<int> *>q;
    	q.push(root);
    	bool flag=true;
    	
    	while(!q.empty()){
    	    int size=q.size();
    	    vector<int>temp(size);
    	    
    	    for(int i=0; i<size; i++){
    	        BinaryTreeNode<int> * node=q.front();
    	        q.pop();
    	        
    	       int index = (flag) ? i : size-i-1;
    	       
    	       temp[index]=node->data;
    	       
    	       if(node->left) q.push(node->left);
    	       if(node->right) q.push(node->right);
    	}
    	
    	flag=!flag;
    	
    	for(auto x : temp){
    	    ans.push_back(x);
    	}
    }
    return ans;
}
