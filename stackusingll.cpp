#include<iostream>
using namespace std ; 
// #include<stack>
// impletmentation of stack using class and ll  

// An array-based stack has a fixed capacity decided at creation time, 
// whereas a linked-list-based stack allocates nodes dynamically. Therefore, the stack can grow as long as heap memory is available.


class llnode{
  public: 
    // two characteristics of node 
   int data ; // ek integer variable which stores the data 
    llnode*next; // ek pointer hoga jo ki next node ka address store krega 
   llnode(int data ){ // this is constructor 
    // if new node create krega to tere ko uske andar data dena hoga 
    this -> data = data;// set the node 's value 
    this -> next = NULL; // initialize the next pointer to null   i.e. no next node yet
   }
};
class stack{
    // class have some attributes so we need some attributes 
    // for array we need mainly array , its index and its size 
    public:
   // implementation of stack using ll : we have access to only the next nodes in singly ll      so our top will always be head and all operation
   // will take place at head 
     llnode*head ; // this is the only parameter a ll need 

     stack(){
        head =NULL ; // if stack is empty so we have to make its head = null we do not have ot pass any head 
        // we want to make current stack head = NUll 
     }

     void push(int data){ // to insert the element instack 
        //  we will have to create the new node in ll and connect with head and update head
        // we are doing insertionat head here b/c we do not have connection with previous nodes 
            llnode*curr = new llnode(data) ;   // create the new node 
            curr->next =head ;  // make connection with head 
            head =curr ; // update the head 
     }

     void pop(){  // to delete element,  element must be present 
        if(head==NULL){  
            cout<<"stack is underflow" <<endl ;
        }
        else{ // store the node to delete move head and delete the ndoe ot delete 
          llnode*temp = head ;
            head= head->next ;
            delete temp ;
        }
     }

 
     bool isempty(){
       if(head==NULL){
        cout<<"stack  is empty"<<endl ;
        return true  ;
       }
       else{
        cout<<"stack is non empty "<<endl ;
        return false ; 
       }
     }

     int peek(){
      if(head==NULL){
        cout<<"stack is empty" <<endl ;
        return -1 ;
      }
      else{
        return head->data;
      }
     }
}; 

int main(){

    stack st;

st.push(1);
st.push(4);

cout << st.peek() << endl;

st.pop();

cout << st.peek() << endl;
  return 0 ; 

}