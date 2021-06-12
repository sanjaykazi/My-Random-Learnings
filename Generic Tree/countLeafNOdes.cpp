#include<iostream>
#include<vector>
#include<queue>
using namespace std;

template <typename T>
class TreeNode{
   public
       T data;
       vectorTreeNodeT children;
       TreeNode(T data){
          this-data = data;
       }
};

void printTree(TreeNode<int>* root){
   if(root==NULL){
    return ;
   }
   cout<<root->data<<": ";
   for(int i=0;i<root->children.size();i++){
    cout<<root->children[i]->data<<" ,";
   }
   cout<<endl;

   for(int i=0;i<root->children.size();i++){
    printTree(root->children[i]);
   }
}

TreeNode<int>* takeInput(){
   int rootData;
   cout<<"Enter data"<<endl;
   cin>>rootData;
   TreeNode<int>* root = new TreeNode<int>(rootData);
   /// how many children
   int n;
   cout<<"Enter num of children of "<<rootData<<endl;
   cin>>n;

   for(int i=1;i<=n;i++){
     TreeNode<int>* child = takeInput();
     root->children.push_back(child);
   }
   return root;
}

TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode<int>* f = q.front();
        q.pop();

        cout<<"Enter no of children of "<<f->data<<endl;
        int n;
        cin>>n;

        for(int i=1;i<=n;i++){
            int childData;
            cout<<"Enter "<<i<<" th child of "<<f->data<<endl;
            cin>>childData;

            TreeNode<int>* child = new TreeNode<int>(childData);
            q.push(child);
            f->children.push_back(child);
        }
    }
    return root;
}

void printTreeLevelWise(TreeNode<int>* root){
     queue<TreeNode<int>*> q;
     q.push(root);
     while(!q.empty()){
        TreeNode<int>* f = q.front();
        q.pop();

        cout<<f->data<<": ";
        for(int i=0;i<f->children.size();i++){
           cout<<f->children[i]->data<<" ,";
         }
        cout<<endl;

        for(int i=0;i<f->children.size();i++){
            q.push(f->children[i]);
        }
     }
}

int countNodes(TreeNode<int>* root){
    if(root==NULL){  /// edge case
        return 0;
    }
    int ans = 1;
    for(int i=0;i<root->children.size();i++){
        ans += countNodes(root->children[i]);
    }
    return ans;
}

int height(TreeNode<int>* root){
     if(root==NULL){  /// edge case
        return 0;
    }
   int mx = 0;   /// maximum height
   for(int i=0;i<root->children.size();i++){
     /*int childHeight = height(root->children[i]);
     if(childHeight > mx){
        mx = childHeight;
     }*/
     mx = max(mx, height(root->children[i]));
   }
   return mx + 1;
}

void printAtLevelK(TreeNode<int>* root, int k){
    if(root==NULL){  /// edge case
        return ;
    }
     if(k==0){ ///base case
        cout<<root->data<<endl;
        return;
     }
     for(int i=0;i<root->children.size();i++){
        printAtLevelK(root->children[i], k-1);
     }
}
int countLeafNodes(TreeNode<int>* root){
    if(root==NULL){   //edge case
        return 0;
      }
      if(root->children.size()==0){
        return 1;
      }
      int ans = 0;
      for(int i=0;i < root->children.size();i++){
       ans +=  countLeafNodes(root->children[i]);
      }
      return ans;
}
void countLeafNodesOtherWay(TreeNode<int>*root, int &ans){
    if(root==NULL){   //edge case
        return ;
    }
      if(root->children.size()==0){
         ans++;
         return;
      }
      for(int i=0;i < root->children.size();i++){
         countLeafNodesOtherWay(root->children[i],ans);
      }
}
 //1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0
int main(){
 TreeNode<int>* root = new TreeNode<int>(1);
  TreeNode<int>* n1 = new TreeNode<int>(2);
  TreeNode<int>* n2 = new TreeNode<int>(3);

  root->children.push_back(n1);
  root->children.push_back(n2);

  TreeNode<int>* root = takeInputLevelWise();
  printAtLevelK(root,2);
 /// printTreeLevelWise(root);
  cout <<"No of leaf nodes"<< countLeafNodes(root)<<endl;
  int totalLeafNodes = 0;
  countLeafNodesOtherWay(root,totalLeafNodes);
  cout<<" No of leaf nodes other way "<<totalLeafNodes<<endl;
  return 0;
}