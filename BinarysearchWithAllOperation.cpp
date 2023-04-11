#include<iostream>
using namespace std;
class BinaryTree{
public :
    int data;
    BinaryTree* left;
    BinaryTree* right;

    BinaryTree(int val)
    {

        data=val;
        left=NULL;
        right=NULL;
    }

};

    BinaryTree* insertDataInTree(BinaryTree* root,int data)
    {
        if(root==NULL)
        {
            BinaryTree* temp= new BinaryTree(data);
            root=temp;
           // cout<<root->data;

        }
        else if(root->data>data)
        {
          //  cout<<"left";
            root->left=insertDataInTree(root->left,data);
        }
        else
        {
           // cout<<"right";
          root->right  =  insertDataInTree(root->right,data);
        }

    }
void deleteNode(BinaryTree* root,int val)
{

}

}
void inorder(BinaryTree* root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        cout<<root->data<<"  ";
        inorder(root->right);
    }
}

int main()
{
   BinaryTree *root=NULL;
   int n;
   cout<<"enter the number of nodes:";
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int data;
       cin>>data;
      root = insertDataInTree(root,data);

   }
inorder(root);



    return 0;
}
