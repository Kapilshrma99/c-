// create a tree
#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node *build_tree(node* root){
    cout<<"enter data";
    int data;
    cin>>data;
    root=new node(data);
     if(data==-1){
        return NULL;
    }
    
    cout<<"enter data in left of: "<<data<<endl;
    root->left=build_tree(root->left);
     cout<<"enter data in right of: "<<data<<endl;
    root->right=build_tree(root->right);
   
    return root;
}
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
void level_order(node* root){
    queue<node*> q;
    q.push(root);
    
    while(!q.empty()){
        node* temp=q.front();
        cout<<temp->data;
        q.pop();
        cout<<"kapil";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    node* root = NULL;
    root=build_tree(root);
    // level_order(root);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}