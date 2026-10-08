 int*arr; 
    int size ; 
    int top ;  // it will basically denote that upto which index the array is filled 

    stack(int size){
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

    int peek(){
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

     