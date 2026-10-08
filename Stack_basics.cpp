
#include<iostream>
using namespace std ; 
// #include<stack>
// impletmentation of stack using class and array 
class stack{
    // class have some attributes so we need some attributes 
    // for array we need mainly array , its index and its size 
    public:
int*arr; 
    int size ; 
    int top ;  // it will basically denote that upto which index the array is filled 

    stack(int size){  // intial construction of all the needed parameters of array 
        this->size =size ; 
         arr= new int[size]; // created a new array of size equal to size  and type int  
        top =-1 ;  // initialised the index with -1 
    }
     // implementation of push operation of stack using array 
    void push(int data){
        // now to insert the element we need to check is space available 
         // if the stack(array) is not filled upto last element then only we can add otherwise stack overflow 
        if(top<size-1){ 
            top++; 
            arr[top] =data ;
        }
        else{
            cout<<"stack overflow"<<endl ; 
        }

    }
    void pop(){
        // now to delete the element we need to check if any element exist in the array or not 
        if(top>-1){
            top--; 
        }
        else{
            cout<<"stack is empty"<<endl ;
        }

    }

    int peek(){   // function ot get the top element of the stack 
        if(top>-1){
         
            return arr[top] ; 
        }
        else{
            cout<<"stack is empty"<<endl ;
            return -1  ; 
        }
    }

    bool isempty(){
        if(top<=-1){
            cout<<"stack is empty"<<endl ; 
            return true ; 
        }
        else{
            cout<<"stack is non empty"<<endl ; 
            return false ;
        }
    }  
}; 
int main(){

    stack st(5) ;  // it will be accessible only when we declare it public 

    st.push(1); 
     st.push(4);

     st.pop() ; 

     cout<<st.peek()<<endl ;

     st.pop() ; 

     st.isempty(); 
    //creation of stack which stores integers (USING STL )
//     stack<int>s ; 
//    // insertion of 2 and 3 
//     s.push(2) ; 
//     s.push(3); 

//     // removing top element 
//     s.pop(); 

//     // finding size of stack 
//     cout<<"size of stack is "<<s.size()<<endl ; 

//     // finding top element of stack 
//      cout<< s.top()<<"is the top element "<<endl ; 

//      // checking if stack is empty 
//     if(s.empty()) {
//         cout<<"stack is empty"<<endl ;
//     }
//     else{
//         cout<<"stack is non empty"<<endl ;
//     
  return 0 ; 
  
}
