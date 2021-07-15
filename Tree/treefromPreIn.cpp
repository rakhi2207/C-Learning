#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    } 

};

int search(int inorder[],int val,int start,int end)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==val)
        {
            return i;
        }
    }
    return -1;
}


Node* preOrderCons(int preOrder[],int inOrder[],int start,int end)
{
    if(start>end)
    {
        return NULL;
    }
    static int idx=0;
    int val=preOrder[idx];
    Node* n=new Node(val);
    idx++;
    if(start==end)
    {
        return n;
    }
    int pos=search(inOrder,val,start,end);
    n->left=preOrderCons(preOrder,inOrder,start,pos-1);
    n->right=preOrderCons(preOrder,inOrder,pos+1,end);
    
}

void printInorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    printInorder(root->left);
    cout<<root->data<<"\n";
    printInorder(root->right);
}
int main()
{ 
    int pre[]={1,2,4,6,3,5};
    int in[]={4,2,6,1,3,5};

    Node* root=preOrderCons(pre,in,0,5);
    printInorder(root);

    return 0;
}
