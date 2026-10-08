//insertion in a singly linked list  
 #include <iostream>
#include <algorithm>
using namespace std;
// defining node of linked list
// # implementation of node   
// we have defined a class that is any linked list node will be of this type 
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


   // destructor 
~llnode(){
  int value = this-> data ;
 // memory free to be done by this way 
  if(this-> next!=NULL){
    delete next;
    next = NULL;
  }// if we want to know clearly which node is deleted 
  //cout<< "memory is free for node with data "<<value<<endl;
}
  } ;
  // traversing of linked list 
  // program to print the linked list 
  void printll(llnode* &head){
    llnode* temp = head;// temp naam ka ek pointer create krr liya jo ki head ko print krr rha h or list traverse krega 
    while(temp !=NULL){ // /jb tkk puri linked list traverse na ho jaye tb tkk print krte raho 
      cout<<temp->data<<" "; //printing the data of node 
      
      temp  = temp -> next; // taking the pointer to next element 
    }
      cout<<endl;
    }
  //case1: -->// insertion  of new node at head i.e starting of linked list 
  void insertathead(llnode* &head,int d){
    llnode* temp = new llnode(d);// creates a new node with data d 
    temp -> next = head;// insert the new node before previous node 
    head = temp ; //it takes back the head to new node 
  }

  //case2: -->// insertion at tail or ending
  void insertattail(llnode* &tail,int d ){
    llnode * temp2 = new llnode(d); // node corresponding to data d 
    tail -> next = temp2 ; // the new node which is corresponding to d is next ot tail element or last element of list 
    // tail = temp2;     this and below both same things 
    tail = tail ->next;  // 
  }
  // case 3 :--> // we can insert in middle position by three possible options by knowing the position
  // that at which position to be inserted or by knowing before and after which data node is to be inserted 
  void insertatmiddle( llnode* &head,int nodedata , int d ){
    // we are doing these for position case 
    // if we want ot insert at staring posittion
  // a-->// if(position ==0){
  //   insertathead(head,d);
  //   return ;      // we will also have to add llnode* &tail in function declaration also  so
  // }
  //b-->// here we can add one node at end but we have not updated tail so:
  // if(temp->next==NULL){
  //   insertattail(tail,d);
  //   return ;    this function automatically updated tail and same for head 

  // }
  // llNode * temp means temp pointer of node type 
     llnode* temp = head ;// created a pointer which points to the head i.e . starting of the ll which wil taverse to the position
    while(temp->next->data!=nodedata){ // here we want to insert the node just before a specific data of node 
      temp = temp-> next;  // we are going to next node until we do n0ot find specific data 
    }
     llnode* nodetoinsert = new llnode(d);// node corresponding to data d 
//when we find out data then we put  
     nodetoinsert-> next= temp-> next; // that data after the node which is to be inserted

     temp -> next= nodetoinsert ;// and tem next ot node 


  }
//   //-->  code for deletion of node in sll using positions 
//   void deletionofnode(int position,llnode* &head,llnode* &tail){
//   // if we want to delete first node 
//   if(position==1){
//     llnode *temp = head;
//     head = head->next;
//     temp->next = NULL;
//     delete temp;
//   }
//   // if we want to delete node in betwen or last node 
//   else {
//     llnode * prev = NULL;
//     llnode*current = head;
//     int count =1 ;
//     while(count<position){ // either this or if you want <= in condition then make the above condition for zero 
//       prev = current;
//       current = current->next;
// count++;
//     }
//     // if we want to update the tail when last node is deleted then 
//     if(current->next==NULL){
//       tail = prev;
//     }
//     prev->next = current->next;
//     current->next = NULL;
//     delete current;
//   }
//}
 // if we want to delete node using data 
void deletionofnode(int d,llnode* &head,llnode *&tail){
  
  llnode* temp = head; // a node of namme temp is created which initially points to the head 
  llnode*prev = NULL; // a prev node initially null
  if(head->data==d){ // this means the node that is to be deleted is first node where head is pointed 
    head= head->next; // so head moved to the next node so that it remains updated 
    temp->next = NULL;// removing connection with ll
  delete temp;// and then deleting the node 
  return; // returning  so that below part od not  ot implement 
  }

  while(temp->data!=d){// until temp data is not equal to d 
    prev = temp; //prev is always one step behind temp 
    temp=temp->next;  // keep taking temp to next node 
  }
  if(temp->next==NULL&&temp->data==d){ // this means if we want to delete last node 
    tail = prev;// then updating tail and taking it back to previous 
  }
  
  prev->next = temp->next;
  temp->next = NULL;
  delete temp;

}
  

int main(){
     // creating object 
    // created new node of name node1 
     llnode* node1 = new llnode(10);

     
     cout<<node1 ->data<<endl;
      cout<<node1->next<<endl; 
    
     // head pointed to new created node i.e  node1 
   llnode* head = node1; // creater a pointer of name head which will point to start of linked list 
   llnode *tail  = node1; // creater a pointer of name tail which will point to end  of linked list

     printll(head);
    

    insertattail(tail,20);
    
    printll(head);

    insertattail(tail,30);
     
    printll(head);

    insertattail(tail,50);
     
    printll(head);

// we want to insert 40 before 50 
    insertatmiddle(head,50,40);
 printll(head);

 deletionofnode(2,head,tail);
  printll(head);
    

    return 0;
}