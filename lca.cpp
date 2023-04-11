#include<iostream>
#include<vector>
using namespace std;
class node{
 public :
    int data;
    node *left,*right;
      node(int val){
         data=val;
         left=NULL;
         right=NULL;

    }

};
//void insertnode(node* root,int val){

//}
void preorder(node* root){
   if(root!=NULL){
    cout<<root->data<<"  ";
    preorder(root->left);
    preorder(root->right);
   }
}
bool getpath(node *root,vector<int> &path,int key)
{
    if(root==NULL){
        return false;
    }

    path.push_back(root->data);
    if(root->data==key){
        return true;
    }
    if(getpath(root->left,path,key)|| getpath(root->right,path,key)){

        return true;
    }
    path.pop_back();
    return false;
}

int lca(node* root,int n1,int n2){
  vector<int> path1,path2;
  if(!getpath(root,path1,n1) || !getpath(root,path2,n2)){
    return -1;

  }
  int pc;
  for(pc=0;pc<path1.size() && path2.size();pc++){

    if(path1[pc]!=path2[pc])
{

    break;

}
return path1[pc-1];
 }


}
node* lowca(node* root,int n1,int n2){
	if(root==NULL){
		return NULL;
	}
	if(root->data==n1||root->data==n2){
		return root;
	}
	node* lca=lowca(root->left,n1,n2);
	node* lca1=lowca(root->right,n1,n2);
	if(root->left==NULL){
		return root->right;
	}
	if(root->right==NULL){
		return root->left;
	}
	return root;

}
int main(){

   node* root;
   root=new node(1);
   root->left=new node(2);
   root->right=new node(3);
   root->left->right=new node(4);
   root->right->left=new node(5);
   root->left->right->left=new node(6);
   root->right->left->right=new node(7);
/* int a  =  lca(root,5,6);
 if(a==-1){
    cout<<"lca does not exit";

 }
 else{
    cout<<"lca="<<a;
 }*/
 cout<<endl;
 node* lca=lowca(root,5,7);
 cout<<lca->data;
 cout<<endl;
   preorder(root);


}



