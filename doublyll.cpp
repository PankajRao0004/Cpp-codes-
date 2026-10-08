#include<iostream>
using namespace std ;
 class Node{
  public: 
  int data;
  Node*prev ;
  Node*next;
  // constructor 
  Node(int d){
    this-> data = d;
    this->next = NULL;
    this->prev = NULL; // we initialised them with NULL so that they do not take any garbage value 
  }
  // destructor 
  ~Node(){
    int value = this->data;
    if(this->next!=NULL){
     
      delete next;
       next = NULL;
    }
cout<<" memory freed of node with data :" <<value<<endl;
  }
 };

 void printll(Node* &head,Node* &tail){
  Node *temp = head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;  
  } // here we have put also the print for head and tail so that we can know with deletion or insertion head or tail is updating or not 
cout<<" the head position is : "<<head->data<<endl;
cout<<"the tail position is :"<< tail->data<<endl;
  cout<<endl;
 }
 // if we want the function to compute the length of the ll
 int getlength(Node * head){
  Node* temp = head;
  int len= 0;
  while(temp!=NULL){
    len++;
    temp = temp->next;

  }
  return len;

 }

 void insertathead(Node* &head,Node* & tail,int d){
  if(head==NULL){ // empty linked list
    Node * temp = new Node(d);   // these statements are if we want to start from scratch and not creating new node as
    // in line number 88 
    head = temp;
    tail = temp;
  }
  Node *temp = new Node(d);
  temp->next = head; // putting head next  to new node 
  head->prev= temp; 
  head= temp;
 }
 void insertattail(Node* &tail ,Node * &head, int d ){
  if(tail==NULL){
    Node * temp = new Node(d);
    head = temp;
    tail = temp;
  }
  Node *  temp= new Node(d);
  tail->next = temp;
  temp->prev= tail;
  tail = temp;
 }


 // insertion by position at any posittion we can do 
 void insertatposition(Node* &head,Node* &tail,int position,int d){
  Node* temp = head;
  Node*insertnode = new Node(d);
  if(position ==1){
  insertathead(head,tail,d);
  return ;
  }
  int count =1; // when we are inserting something we want to remain at one node before the insertion posittion
  // that is like if we want to insert the node at third postion as owe stop at postion 2nd and then insert 

  while(count<position-1){ // so here posittion -1 ;
    temp = temp->next;
count++;
  }
  if(temp->next == NULL ){
    insertattail(tail,head,d); // check is last node insertion
    return ;
  }
//   Node*forward = temp->next; // we have lose connection ater first below two statement so we saved it in a pointer 
//  temp->next = insertnode;
//  insertnode->prev = temp;
//  forward->prev = insertnode;
//  insertnode->next = forward; 

// if we do not want to store the value in forward variable 
// first making right side connections of temp and temp-> next and then left side connections of temp and insert node 
insertnode->next = temp->next;
temp->next->prev = insertnode;
temp->next = insertnode;
insertnode->prev = temp ;  

 }

 void deletenode(Node* &head,Node* & tail,int position){
  if(position ==1){  // if first node to be deleted 
    Node * temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
  }
  else{
    Node*temp = head;
    Node* previous = NULL;
    int cnt=1;
    
    while(cnt<position){// here we want to reach till that node which is to be deleted ; 
      previous = temp;
      temp = temp->next;
      cnt++;
    }
if(temp->next == NULL){// checking the condittion that if the last node is deleting then update tail 
  tail = previous;
}

temp->prev = NULL;  // 
previous->next = temp->next;
temp->next = NULL;
delete temp;
  }
 }

int main(){
// at first we will create a node and node will have atributes like as in constructor 
  Node*node1 = new Node(10); // we created a new node i.e. node 1 

  Node*head = node1; // node type pointer head is pointed to start ofnew node  node1
  Node* tail = node1; // pointer created for tail ;
  insertathead(head,tail,5);

  printll(head,tail);

  insertattail(tail,head,20);
   printll(head,tail);

  insertatposition(head,tail,3,15);
   printll(head,tail);
insertatposition(head,tail,1,0);
   printll(head,tail);
   insertatposition(head,tail,6,25);
    printll(head,tail);

    deletenode(head,tail,6);
    printll(head,tail);

  return 0;
}