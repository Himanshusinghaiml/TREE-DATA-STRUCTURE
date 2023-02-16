#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node*left_child;
    node*right_child;
    node(int data){
        this->data=data;
        this->left_child=NULL;
        this->right_child=NULL;
    }
};
node*create_binary(node*root)
{   int data;
   cout<<" enter the data  : "<<endl;
   cin>>data;
   root=new node(data);
   if(data==-1)
   {
    return NULL;  
   }
   cout<<" enter the data for left child :"<<data <<endl;
   root->left_child=create_binary(root->left_child);
   cout<<" enter the data for right child :"<<data<<endl;
   root->right_child=create_binary(root->right_child);
   return root;
}
void print(node*root)
{    if(root==NULL)
{
    return ;
}
     cout<<root->data<<" ";
     print(root->left_child);
     print(root->right_child);
}
int main()
{    node*root=NULL;
     root=create_binary(root);
     print(root);
    return 0;
}