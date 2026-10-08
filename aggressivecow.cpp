// in this question we want to place m cows at maximum distance so that they do not fight with each other 
// here arr element denotes the stall position of these cows 

//Approach --> we first identified that when it is possible 
#include<iostream>
#include <algorithm> // used so that we can use sort function in this array 
using namespace std;

// checking that  for value of mid it is true or not 
bool ispossible(int arr[],int n,int m,int mid){
int cowcount =1; // first cow 
int lastpos = arr[0];// putting forst cow at starting stall
for(int i =0;i<n;i++){
  if(arr[i]-lastpos>=mid){// if array element - position of first cow has distance greater than or equal to mid 
  cowcount++; // then we can put second cow at the arr[i] position 
  if(cowcount==m){ //checking for cow no. equal to given cows
    return true; // returning true because there exists stal postion where we can put second cow 
  }
  lastpos = arr[i]; // position for second  cow 
}
}
 return false; // if condition not satisfies then returning false 
}
int aggressivecow(int arr[],int n,int m ){
  int s=0;
  int maxi=-1;
  

  for(int i=0;i<n;i++){
     maxi = max(maxi,arr[i] ); // finding the maximum value of search space 
  }
  int e = maxi; // ending index equal to maximum value 
  int mid = s +(e-s)/2;
  int ans =-1;
  while(s<=e){
    if(ispossible( arr,n,m,mid)){ // if solution is possible 
      ans =mid; // then storing the value of mid in answer 
      s= mid+1; // going into right part  because we want maximum distance 
    }
    else {
      e= mid -1;  // if it is not possible solution then coming in the left part because mid value so large that
    }           // that there does not exist any   arr element  which can satisfy condition of if loop 
    mid = s +(e-s)/2;
  }
return ans;
}






int main(){
int cow[5] = {4,3,1,2,6};
sort(cow,cow+5); // sprting so that we can define our search space .
cout<<aggressivecow(cow,5,2);


return 0;
}