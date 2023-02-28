#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
     node *right;
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
    
};
void print(node*root)
{   if(root==NULL)
{
    return ;
}
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
void preorder(node*root)
{
   // root->left->right
    
   if(root==NULL)
   {  
    return ;
   }
    
   cout<<root->data<<" ";
   preorder(root->left);
   preorder(root->right);
}
void inorder(node*root)
{  //left->root->right
 if(root==NULL)
 {
    return ;
 }
 inorder(root->left);
 cout<<root->data<<" ";
 inorder(root->right);
}
 
 void postorder(node*root)
 {  //left->right->root
     if (root==NULL)
 {
    return ;
 }
 postorder(root->left);
 postorder(root->right);
 cout<<root->data<<" ";

 }
 
 

int main()
{   node*root=new node(5);
 
    root->left=new node(6);
    root->left->left =new node(8);
    root->left->right=new node(9);
     
    root->right=new node(7);
    root->right->left=new node(10);
    root->right->right=NULL;
    
    // print(root);
    cout<<" preorder traversal : "<<endl;
    preorder(root);
    cout<<endl;
    cout<<" inorder traversal : "<<endl;
    inorder(root);
    cout<<endl;
    cout<<" postorder traversal : ";
    postorder(root);
    
    return 0;
}