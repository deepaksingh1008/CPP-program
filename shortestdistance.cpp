#include<iostream>
using namespace std;

class node{
public :
    int data;
    node* right,*left;

    node(int val){
       data=val;
       right=NULL;
       left=NULL;

    }

};
void preorder(node* root){
  if(root!=NULL){

    cout<<root->data<<"  ";
    preorder(root->left);
    preorder(root->right);
  }

}

node* lca(node* root,int n1,int n2){
  if(root==NULL){
    return NULL;
  }
  if(root->data==n1||root->data==n2){
    return root;
  }

  node* l=lca(root->left,n1,n2);
  node* r=lca(root->right,n1,n2);
  if(l==NULL){
    return r;
  }
  if(r==NULL){
    return l;
  }
  return root;


}

int finddist(node* root.int k,int dist){
  if(root==NULL){
    return -1;

  }
  if(root->data==k){
    return dist;
  }
  int left=finddist(root->left,k,dist+1);
  if(left!=-1){
    return left;
  }
  int right = finddist(root->right,k,dist+1);
  if(right!=-1)
    return right;

}

int distance_between_two_node(node* root,int n1,int n2){
  node* LCA=lca(root,n1,n2);
  int d1=finddist(LCA,n1,0);
  int d2=finddist(LCA,n2,0);

  return d1+d2;

}


int main(){

node *root;
root=new node(1);
root->right=new node(2);
root->left=new node(3);
root->right->right=new node(4);
root->right->left=new node(5);
root->left->left=new node(6);
root->left->right=new node(7);
preorder(root);
cout<<endl;
node* lc=lca(root,5,6);
cout<<lc->data;

}
