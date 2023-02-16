#include<bits/stdc++.h>
using namespace std;
struct node
{   int data;
   node*left,*right;
   node(int data)
   {
    this->data=data;
    this->left=NULL;
    this->right=NULL;
   }
};
void print(node* root)
{  // pre order
    if(root==NULL)
{   
    return ;
}
    cout<<root->data<<endl;
//   cout<<root->left->data<<endl;  manually we can print 
//   cout<<root->right->data;
 print(root->left);// using recursion print tree 
 print(root->right);

}
 
 
int main()
{   node*root=NULL;
    node*newnode=NULL;
    
    newnode=new node(1);
    root=newnode;
    
    root->left=new node(2);
   
    root->left->left=new node(4);
    root->right=new node(3);
    root->left->right=new node(5);
    print(root);
    
     
     
    
 
    return 0;
}