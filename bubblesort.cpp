// here we want to  sort the array using bubble sort technique 
// Approach -> we take the rounds n-1 and check the element whom is to be sorted upto the element from the 
// last - i becuase in ith round ith largest element get sorted 
#include<iostream>
#include<algorithm> // to use swap function 
using namespace std;
void sortarr(int arr[],int n){
  bool check = false; // we made this boolean variable so that if no swap take place then we can quickly come out of the loop and not proceed further because it is already sorted
  for(int i=1;i<n;i++){ // loop for round number  we can start it from 1 also 
    // in ithe ith round ith element get sorted 
for(int j=0;j<n-i;j++){// here we will go to n-i beacue largest ith element get sorted 
  if(arr[j]>arr[j+1]){ // condition for swapping to take place 
    swap(arr[j],arr[j+1]); // swapping adjacent elements 
    check = true; // if swapping take place then proceeding further 
  }

}
if(check ==false){ // no swap means array sorted come out 
  break;
}
  }
  for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
  
int main(){
  int sorted[5] = {6,2,8,4,10};
  sortarr(sorted,5);
return 0;
}
