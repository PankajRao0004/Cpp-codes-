// here we want to sort the elements in the ascending order 
// Approach - we will take each element of array in the loop(i)and check the next elements having minimum value
// value if find then swapped with minindex
#include<iostream>
#include<algorithm>
using namespace std;
void sortarr(int arr[],int n){
  // n-1 passes 
  for(int i =0;i<n-1;i++){ //we will go upto second last element because last element will be sorted by itself 
    int minindex =i; // assuming the ith elementindex to be minimum element index
    for(int j =i+1;j<n;j++){ // checking the next part of the array for minimum element 
      if(arr[j]<arr[minindex]){ // here we will compare with minindex not i beacuse i fixed and minindex can be updated 
       minindex =j;// updating the value of min index 
        
      }
      
    }
    swap(arr[minindex],arr[i]); // swapping the final value of minindex 
  }
 for(int k =0;k<n;k++){
    cout<<arr[k]<<" "; // printing the sorted array 
 }
}
 



  
int main(){
  int sorted[5] = {6,2,8,4,10};
  sortarr(sorted,5);
return 0;
}

