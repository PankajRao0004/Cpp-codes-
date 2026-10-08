#include<iostream> 
#include<queue>
using namespace std;
// this is the format of node that every node will contain: 
class node{
    public:

    int data; // data of itself
    node*left;// left child
    node*right; // right child 
 // constructor--> that every new node will be created like below
 node(int d ){
    this-> data = d ;
    this -> left = NULL;
    this-> right=NULL;
 }   
};

node* createtree(node * root){
    // we ask for the data of node itself first and then recursively ask for left and right child  data 
    //and create the left and right child as node 

    cout<< " enter the data :"<<endl;
    int data ; 
     cin>> data ; 
     // we created a new node  data provided by  user 
     root = new node(data);
// this means we have reached to leaf that is reached to that node that have no child 
     if(data ==-1){
        return NULL;
     }
     cout<<"enter the data for the node to insert in the left of: "<<data<<endl;
     root->left = createtree(root->left);
     cout<<"enter the data for ther node to insert in the right of :  "<<data <<endl;
     root->right = createtree(root->right);

}

// level order traversal 

void levelordertraversal(node * root){
// we created a queue of name q 
queue<node*> q ;
// we pushed the root node into queue 
q.push(root);
// we are using NUll as a seperator between levels 
q.push(NULL);
// until queue is not empty 
while(!q.empty()){
  // we ceated a pointer temp which points to the starting of node 
node*temp = q.front();
// we removed the element that which we have pointed 
q.pop();
// pointed element is NULL means we have reached to the end of level 
if(temp ==NULL){
   // as we have reached to the end of level so we will move to next line for next level 
   cout<<endl ; 
 if(!q.empty()){ // if now also q is not empty means there are child of node available in the queue 
q.push(NULL); // so push sepeartor after  childs of node so that we can seperate level 
 }
   
}
else { // means temp is not pointing to NULL 
   cout<<temp->data<<" "; // so printthe data  of the node which is pointed by temp 
   if(temp->left){ // if temp have left child then add that child into queue 
      q.push(temp->left);

   }
   if(temp->right){ // if temp have right child then add that child into queue 
      q.push(temp->right);
   }
}
}
} 
 // inorder  recursive code  L N R 
void inorder( node * root){
   // base case 
   if( root ==NULL){
       return ;
   }
// we will go to left till we get NULL  
   inorder(root->left);
   // when we get NULl then we have reached to N part of LNR then we will print the data of node 
   cout<<root->data<<" " ; 
   // then we will call for right child of node 
   inorder(root->right);
} 

// preorder NLR
void preorder( node * root ){
   if( root ==NULL){
      return ; 
   }
   cout<< root->data <<" ";
   preorder( root->left);
   preorder(root->right);
    
}

// postorder L R N 
void postorder( node * root ){
    if( root == NULL){ 
      return ; 
    }

    postorder(root->left);
    postorder(root->right);
    cout<< root->data<<" ";
} 
// this is when we are given level order traversal of a tree and we want to build tree from that order 
void buildtreefromlevelordertraversal(node* &root){ // we pass by reference so that we do not return anything and we can use root node as default 
   //we created a queue that will store data of node type 
   queue<node *> q;
   //we take input the data of root node from where levels start or tree start 
   cout<< " enter the data for root"<<endl ; 
   int data ; 
   cin>>data ; 
   // we provided data to root 
   root = new node(data);
   // then pushed the root into queue 
   q.push(root);
   // until queue is not empty means we have not covered all levels
   while ( !q.empty()){
      // created a node named temp which points to starting of queue 

      node * temp = q.front();
      // then removed pointed element 
      q.pop();
// then we ask for the left and right node as for next level 
      cout<< "enter left node data of : "<<temp->data<<endl;
      int leftdata ; 
      cin>>leftdata;

      if(leftdata!=-1){ //if data  is not NULL then link is to left of temp and push into queue 
         temp->left = new node(leftdata);
         q.push(temp->left);

      }

       cout<< "enter right node data of : "<<temp->data<<endl;
      int rightdata ; 
      cin>>rightdata;

      if(rightdata!=-1){
         temp->right = new node(rightdata);
         q.push(temp->right);

      }

      
   }
   

}

int main(){
	node * root = NULL;
   buildtreefromlevelordertraversal(root);
  levelordertraversal(root);
   //create tree 

//     root = createtree(root);
//     // level order 
//  levelordertraversal(root);
//  cout<< " inorder traversal is : "<< endl ; 
//  inorder(root);

// cout<< " preorder traversal is:"<< endl ;
// preorder( root);
 
// cout<<" postorder traversal is: "<< endl ;
//  postorder(root);



}
