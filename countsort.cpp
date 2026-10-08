#include<iostream>
#include<vector>
using namespace std;
void countsort(int arr[],int n, int k){
  vector<int>count(k+1,0) ;  // array created to store count and indexes before which na element can come 
  vector<int>b(n,0) ; // to store sorted array 
  for(int i=0 ;i<n ;i++){
    count[arr[i]]++; // we increase the count of eacgh element starting from 0 to k by going to that element 
  }
  // now moving form 2nd element till last in ocunt array and adding so that we can know that specific element comes out upto before which index 

  for(int i =1 ; i<=k ;i++){
    count[i] = count[i]+count[i-1] ; 
  } // now index stored now we have to fill the sorted element moving from right ot left 

  for(int i = n-1 ; i>=0 ;i--){
    b[--count[arr[i]]]= arr[i] ; // first we move to the elemet of original array form that we get a vlue b/w 0 to k rhne we go to 
    // count array from there we get index before which that k value must exist in sorted array so we pre decrement it as we are tsking index here 
  }
  // now copying the array b to original array 
  for(int i =0 ;i<n ;i++){
    arr[i] = b[i] ; 
  }
}



int main(){
 int arr1[17] = {2 ,1 ,1 ,0 ,2, 5, 4, 0,2,8,7,7,9,2,0,1,9};
 
 countsort(arr1, 17,9) ; 
 
 for(int i=0 ;i<17;i++){
    cout<<arr1[i]<<" " ; 
 }

    return 0 ;
}