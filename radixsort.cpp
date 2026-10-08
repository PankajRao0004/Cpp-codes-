// here jsut we use count sort but we use digit by digt not directly on integers 
#include<iostream>
#include<vector>
using namespace std;
void countsort(int arr[],int n, int pos){  // it will ask for the position at which we have to aplly count sort 
  vector<int>count(10,0) ;  // array created to store count and indexes before which na element can come  it is fix b/c digits will be always b/w 0to 9 
  vector<int>b(n,0) ; // to store sorted array 
  for(int i=0 ;i<n ;i++){
    count[(arr[i]/pos)%10]++;
   } // we increase the count of the digit present at index 0 to n-1 at the specified place 
  //  arr[i]/pos it tell us the exact position nad thne %10 find the number so this is the modification here we have to divide by 
  // pos so that we may also get hundreds digit and tens dgit and so on 
  // now moving form 2nd element till last in ocunt array and adding so that we can know that specific element comes out upto before which index 

  for(int i =1 ; i<=9 ;i++){
    count[i] = count[i]+count[i-1] ; 
  } // now index stored now we have to fill the sorted element moving from right ot left 

  for(int i = n-1 ; i>=0 ;i--){
    b[--count[(arr[i]/pos)%10]]= arr[i] ; // first we move to the element of original array thne find the digit thne  form that we get a vlue b/w 0 to 9 thne we go to 
    // count array from there we get index before which that k value must exist in sorted array so we pre decrement it as we are tsking index here 
  }
  // now copying the array b to original array 
  for(int i =0 ;i<n ;i++){
    arr[i] = b[i] ; 
  }
}
int  getmax(int arr[], int n ){
  int maxelement = -1 ;
  for(int i=0 ; i<n ;i++){
    
    maxelement = max(maxelement, arr[i]) ; 
    

  }
  return maxelement ; 
}

 void radixsort(int arr[] ,int n){
  int m = getmax(arr,n) ; 
  for(int pos =1 ; m/pos>0;pos=pos*10){
    countsort(arr,n,pos) ; 
  }
 
 }

int main(){
 int arr1[17] = {432, 8, 90 ,530 ,643, 45, 77, 12, 5556, 34252, 925, 0515, 534,234,456,111,435 };
 //cout<<getmax(arr1, 17) ;
 
 radixsort(arr1, 17) ; 
 
 for(int i=0 ;i<17;i++){
    cout<<arr1[i]<<" " ; 
 }

    return 0 ;
}
