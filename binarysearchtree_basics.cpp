// we have learnt here insertion , deletion , maxval , min value in bst 
#include<iostream>
#include<queue> 
using namespace std ; 
class node{
  public : 
  int data ;
  node * left ;
  node * right ;
  node(int d){
    this ->data =d ;
    this->left = NULL;
    this->right = NULL;
  }
};

// insert into bst 
node *insertintobst(node * &root , int d ){
   if(root ==NULL){
    // as root points to NULL  so we created a new node of name root corresponding to data d
    root = new node(d);
   // and then returned that root 
    return root ;
   }
// if given data is greater that root data it means we have to insert the node in right part of root 
   if(d>root->data ){
    root->right = insertintobst(root->right,d);
   }
   else { // similarly if  data smaller that it will be for left part 
    root->left = insertintobst(root->left,d);
   }
   return root ; // at the end we return root 
  }
// we have to take input the data of each node 
void takeinput(node * &root){ // so we passed the root node 
    int data ; // then created a variable data and took input 
     cin>> data ;

    //until we get data  -1 
     while(data != -1 ){
      // we will keep inserting data into bst 
       root = insertintobst(root,data);
       // and keep takin input data 
       cin>>data ; 
     }

  } 

  // level order traversal 
 void levelordertraversal(node * root){
  queue<node*>q;
  // base case 
  if(root == NULL){
    return ; 
  }
  q.push(root);
  q.push(NULL);
  

  while(!q.empty()){
    node * temp = q.front() ;
  q.pop();
  if(temp == NULL){
    cout<<endl ; 
    if(!q.empty()){
      q.push(NULL);
    }
  }
  else {
    cout<< temp->data<<" ";
    if(temp ->left){
      q.push(temp->left);
    }
    if(temp->right){
      q. push(temp->right );
    }
  }
    
  }
 } 
// preorder 
 void preorder(node*root){
  if(root ==NULL){
    return ;
  }
  cout<<root->data <<" ";
  preorder(root->left);
  preorder(root->right);

 }
 // inorder 
  void inorder(node*root){
  if(root ==NULL){
    return ;
  }
  
  inorder(root->left);
  cout<<root->data <<" ";
  inorder(root->right);

 }
 // postorder 
  void postorder(node*root){
  if(root ==NULL){
    return ;
  } 
  postorder(root->left);
  postorder(root->right);
  cout<<root->data <<" ";
 }

 // min value in tree 
  // we get the node having minimum value from this function 
 node *minvalue(node* &root){
  node * temp = root ; // we created a node temp 
  // so we checked before left part is not NULL before moving to that  part 
   while( temp->left!=NULL){//and as we  know in bst left part is smaller that root so we move to left until we find min value 
    temp = temp->left ; 
   }
   return  temp; // at last we returned temp 
 }

 // max value in tree
 // similarly for max value we move to right until we get right part null and at last we get max value 
  node *maxvalue(node* &root){
  node * temp = root ;
   while( temp->right!=NULL){
    temp = temp->right ; 
   }
   return  temp;
 }

 // deletion of bst is very impoertant 
 node *deletefrombst(node * root , int val){
    if(root==NULL){
        return NULL;
    }

    if(root->data == val){
        // we have found the node which we have to delete 
        // there are four cases for a node to delete 
        // if 0 child exists of the node which is to be deleted 
        if(root->left==NULL && root->right == NULL){
            delete root ; 
         return NULL;
        }
        // if 1 child exists of the node which is to be deleted 
        // left child exist 
         else if(root->left != NULL && root->right ==NULL){
            node * temp = root->left ; 
            delete root ; 
            return temp ; 
         }
          // right child exists 
          else if(root->left == NULL && root->right !=NULL){
            node * temp = root->right  ; 
            delete root ; 
            return temp ; 
         }
         // both child exists 
        else { // two cases here to solve this either we find min value from right side or max value from left 
              // inorderpredecessor 
            //    // solving min value from right 
            //     // we find the minmimum valur from the right subtree of the node which is to be deleted
            //    int mini = minvalue(root->right)-> data;  // as we need data so we find it out of the minimum node 

            //    root->data = mini ;  // then we replaced the rooot data by min value 
            //    // and at last we deleted that minimum value node from the right subtree
            // root->right =    deletefrombst(root->right , mini);

            // solving max value from left ; 
            // similarly we can find maximum value from the left subtree 
            int maxi = maxvalue(root->left)->data;
            // replaved data of root 
            root->data = maxi ;
            //  then we have to preform deleation from the left subtree of the node having max value in it 
            root->left = deletefrombst(root->left , maxi);
        }
         
    }
   else  if(root->data > val ){
        // we have to go in left part 
        root->left = deletefrombst(root->left, val );
    }
    else { // move into right part 
        root->right = deletefrombst(root->right , val ) ;     
    }
 }


//  // this function is of insertion in iterative way 
//  void insertone(node* root , int val ){
//   // we wanted to insert a node having data val in bst 
//   // we created a node temp  corresponidng to val 
//   node * temp = new node (val);
//   if(root==NULL){ // if tree empty then we created root for tree 
//     root = temp;
//     return ; 
//   }
//   node* r1 = root ; // we created two pointers r1 and r2 and initialised them 
//   node * r2 =  NULL ;
//   while(r1 != NULL&& r1->data != val ){ // until r1 do not point to null and r1 data ! = val  
//     r2= r1 ;  // we keep moving r2 one step behind r1 
//     if(r1->data> val){ // r1 moves according to data compaerision 
//       r1 =r1->left ; 
//     }
// Remember here we have to use else if not only if other wise r1 data will again be compared here
    
//    else  if( r1->data < val ){
//       r1  = r1 ->right ;
//     } 
//   } 
//   // when we have completed whole loop means we have found a node which points to null the r2 points to a node just before it 
//    if( r2->data> temp->data ){ // then again comparing with r2 we put according to data 
//       r2->left = temp; 
//     }

//     else {
//        r2->right = temp; 
//     }

//  }

int main(){
 node * root = NULL;

 cout<< " enter the data to create BST"<<endl ; 

takeinput(root);

levelordertraversal(root);
cout<<endl<<"printing the preorder traversal "<<endl ;
preorder(root);

cout<<endl<<"printing the inorder traversal "<<endl ;
inorder(root);

cout<<endl<<"printing the postorder traversal "<<endl ;
postorder(root);

cout<<endl<<"the minimum value is :  "<<minvalue(root)->data<< endl ; 
 

cout<<endl<<"the maximum value is :  "<<maxvalue(root)->data<< endl ; 

deletefrombst(root,50);

 

  return 0 ; 

}

