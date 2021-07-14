#include<iostream>
using namespace std;

struct Node
{
    int val;
    Node* left;
    Node* right;
    Node(int value)
    {
        val=value;
        left=NULL;
        right=NULL;
    }
};

//PreOrder Traversal

void preorder(Node* root)
{
    if(root!=NULL){
    cout<<root->val<<"\n";
    preorder(root->left);
    preorder(root->right);
    }else
    {
        return;
    }
}


//InOrder Traversal

void inorder(Node* root)
{
    if(root!=NULL){
    inorder(root->left);
    cout<<root->val<<"\n";
    inorder(root->right);
    }else
    {
        return;
    }
}

//Postorder Traversal
void postorder(Node* root)
{
    if(root!=NULL){
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<"\n";
    }else
    {
        return;
    }
}

int main()
{
    struct Node* root= new Node(4);
    root->left=new Node(3);
    root->right=new Node(5);
    root->left->left=new Node(6);
    root->left->right=new Node(10);
    root->right->left=new Node(16);
    root->right->right=new Node(7);
    cout<<"Preorder Traversal"<<"\n";
    preorder(root);
    cout<<"InOrder Traversal"<<"\n";
    inorder(root);
    cout<<"PostOrder Traversal"<<"\n";
    postorder(root);
    return 0;
}
