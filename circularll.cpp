// code of Love babbar 
#include<iostream>
#include<map>
using namespace std;

class Node { // this is similar node constructor , destructor 
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};
// as we know that in circular linked list tail pointer matters only 
void insertNode(Node* &tail, int element, int d) {
    
// Assuming that element will surely occur inside linked list 
    //empty list
    if(tail == NULL) { // 
        Node* newNode = new Node(d); // we created new node with data d
        tail = newNode; // and set the tail pointer to thst node 
        newNode -> next = newNode;// and make connection to itself so it look like circular linked list 
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element) {
            curr = curr -> next;
        }
        
        //element found -> curr is representing element wala node
        Node* temp = new Node(d); // we created a node temp of data d 
        temp -> next = curr -> next; 
        curr -> next = temp;

    }

}    

void print(Node* tail) {

    Node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do { // this is how we will print circular linked list we go on printing the elements until we again get  value  from where we started 
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) { // means we have returned back to same from where we started  and we have not get null 
        return true; // so this is circular ll 
    }

    return false;

}

bool detectLoop(Node* head) { // this is the similar to check for circular linked list 

    if(head == NULL) // if empty list return false 
        return false;

    map<Node*, bool> visited; // we created a map to store visited elements of linked lsit 

    Node* temp = head; // starting from head  of linked list 

    while(temp !=NULL) { // until we get null 

        //cycle is present
        if(visited[temp] == true) { // if we have found that node visted mens we have cover that node already , there becomes a loop b/c we also h
          // have not get null till now 
            return true;
        }

        visited[temp] = true; // for every element we mart it visted 
        temp = temp -> next; // and move to next element 

    }
    return false; // of we have covered whole and do not detect loop 

}


int main() {

    Node* tail = NULL;

   // insertNode(tail, 5, 3);
    //print(tail);

  //  insertNode(tail, 3, 5);
   // print(tail);

/*
    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);
    
    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);
   

    deleteNode(tail, 5);
    print(tail);
     */

    if(isCircularList(tail)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }

    return 0;
}
