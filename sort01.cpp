#include<iostream> 
#include<math.h>

using namespace std ;
// Approach 1 : two pointer approach 
void intel(int arr[],int n ){
  int i=0;
  int j = n-1;
  while(i<j){
    if(arr[i]==0){
      i++;
    }
    if(arr[j]==1){
      j--;
    }
    
      swap(arr[i],arr[j]);
      i++;
      j--;
    

  }
  for(int i =0;i<n; i++){
    cout<<arr[i];
  }  
} 


int main()
{
    int size;
    cin >> size;
    int arr[size];
    
    cout<<" provide the elements of array " ;
    for(int i =0;i<size; i++){
      cin>>arr[i];
    }  
    
      intel(arr,size);                                   
   return 0 ;
}
 // here we want to sort the 0 and 1
 // 2nd approach : sort function on array 
 // 3rd approach : count 0 and 1 and then sort them or print them 