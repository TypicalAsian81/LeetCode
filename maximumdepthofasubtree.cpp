#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    node *left;
    node *right;
};

int maxDepth(node *node){
    if(node == NULL)
        return;
    else
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
 
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
}

node *newNode (int data){
    node->data = data;
    node->left=NULL;
    node->right=NULL;
}

int main(){
    //input


    return 0;
}
