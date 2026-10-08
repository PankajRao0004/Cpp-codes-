#include<iostream>
#include<queue> 
using namespace std ; 

class heap{
public:
// we assumed that it have an arr with size 100 
int arr[100];
int size ;
//constructor of heap 
heap(){
   // we have made it -1 its optional
  arr[0] = -1 ; 
  // we initialised the size with 0  , w
  // we may also intialse size variable with 0  
  size = 0 ;
}

// heap contains an insert function to insert the elements in the heap
void insert(int val){
  size = size+1; // we increased the size for value to insert 
  int index = size; // we created a variable index which points to the last element of arr where val is to be inserted 
  arr[index] = val ; // then we put the vsl in the array 

  // for max heap  : 
 // then until we reach the root node 
  while(index>1){ 
    // as parent of node at index is at index /2 
    int parent = index/2;
    // we compare the parent and node as in max heap parent should be larger than node 
    

    // if we want to make min heap the njust reverse thw sign in if condition 
    if(arr[parent]<arr[index]){ // if node is larger than parent 
      swap(arr[parent],arr[index]); // then we swapped parent and node 
      index = parent; // and take the index to parent now 
    }
else { // if it do not violate max heap rule then simply return
  return ; 
}

  }


}
 // then heap also have print function in class heap 
void print (){ 
  // as we are putting the element from ist index 
  for(int i =1 ; i<=size;i++){
    cout<<arr[i]<<" ";

  }
  cout<<endl ; 
}
// whne we delete from heap its the root node which gets deleted 
void deletefromheap(){
  // if heap is empty 
  if(size==0){
    cout<<" nothing to delete"<<endl;
    return ; 
  }
  // if heap is not empty then replaced root node with heap last element 
  arr[1]= arr[size];
 // thne decreased the size so that last node cant be accesed that is deleted 
  size--;
  // then we have to take the last node data which is currently at root node , we have  to  take it to its correct positition 
  int i =1 ;
  //untilwe have not covered the whole heap   
  while(i<size){
    // we findout index of left child and right child 
    int leftindex = 2*i;
    int rightindex= 2*i +1; 
   // then if max heap condition violation and left child is greater tha nright child then swapped it
   // third condition is additional to check which is greater between left and right  
    if(leftindex<=size && arr[i]<arr[leftindex] && arr[leftindex]>arr[rightindex]){
      swap(arr[i],arr[leftindex]);
      i = leftindex;
    }
    if(rightindex<=size && arr[i]<arr[rightindex] && arr[rightindex]>arr[leftindex]){
      swap(arr[i],arr[rightindex]);
      i = rightindex;
    }
// if max heap conditions satisfied then simply return 
    else{
      return ; 
    }


  }

}
};

// heapify algorithm 
 void heapify( int arr[],int n ,int index ){
  int largest = index ;  // we make the index given node as largest 
  int left = 2* index ; // we find out the left child and right child 
  int right = 2*index +1; 
 // if left child is greater than root the made largest left 
  if(left <= n && arr[largest]<arr[left]){
    largest = left ; 

  }

  // similarly for right child 
  if(right <= n && arr[largest]<arr[right]){
    largest = right ; 
  }
// if largest index has changed means largest is not the node , its child are largest 
  if(largest != index){
    // then swapped largest with node 
     swap(arr[largest],arr[index]);
     // and updated he index 
     index = largest ; 
     // then check for its lower part it is heap or not 
     heapify(arr,n,index)  ;
  }
 }

// heapsort
 void heapsort(int arr[], int n){
  // until we get a single element we keep sorting elements 
  while(n>1){
    // we swapped the first element of array with last as we know root node of max heap is the largest  element 
swap(arr[1],arr[n]); 
// then we decreased the size as it has reached to its correct place for sorting 
  n--;
// then we took the root node element that is swapped to its corect position 
  heapify(arr,n,1);
  } 
 }

int main(){
  heap h ;
  h.insert(55);
  h.insert(53);
  h. insert(54);
  h.insert(52);
  h.insert(50);
  h.print();
h.deletefromheap();
h.print();
  
int arr [6] = {-1 , 54 ,53,55,52,50 };
int n =5 ; 
// as we are processing only non leaf nodes so from 1 to n/2 ;  other leaf nodes are already maxheap 
for(int i=n/2; i>0 ; i--){
heapify(arr ,n ,i );
}
cout<<" printing the array "<<endl; 
for(int i =1; i<= n ;i++){
  cout<<arr[i]<<" ";
}cout<< endl ; 


heapsort(arr,n);
cout<<" printing the  sorted array "<<endl; 
for(int i =1; i<= n ;i++){
  cout<<arr[i]<<" ";
}cout<< endl ; 

cout<< "using priority_queue"<<endl ;
 // maxheap 
priority_queue<int>maxi; 

maxi.push(12);
maxi.push(10);
maxi.push(17);
maxi.push(13);

cout<<"the top element currently present is : "<<maxi.top()<<endl ; 
maxi.pop();
cout<<"the top element currently present is : "<<maxi.top()<<endl ;
if(maxi.empty()){
  cout<<"max heap is empty "<<endl ; 
}

else{
  cout<<"max heap is not empty "<<endl ; 
}
// min heap 
priority_queue<int, vector<int> , greater<int>>mini ;

mini.push(4);
mini.push(5);
mini.push(2);
mini.push(3);

cout<<"the top element currently present is : "<<mini.top()<<endl ; 
mini.pop();
cout<<"the top element currently present is : "<<mini.top()<<endl ;
if(mini.empty()){
  cout<<"min heap is empty "<<endl ; 
}

else{
  cout<<"min  heap is not empty "<<endl ; 
}







return 0;
}
 