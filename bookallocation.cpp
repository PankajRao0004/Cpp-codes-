#include<iostream>
using namespace std;
// same problem is there of painter partition:
// in this question we want to distribute 4 books in 2 persons with array element equal to pages of each book 
// we want that both the students get minimum no . of pages in possible cases 
// function for checking if the mid is solution or not 
bool ispossible(int arr[],int n,int m,int mid){
  int studentcount = 1; // for first student 
  int pagesum= 0; // initialising a variable which contains sum of pages student 1 have . 
  for(int i =0;i<n;i++){ // traversing the array 
    if(pagesum+arr[i]<=mid){ // condition that if sum of pages + we are giving in array of i is less than mid
      pagesum+=arr[i]; // then add pagesum 
    }
    else{ // if it becomes greater than mid then 
      studentcount++; // for next student 
      if(studentcount>m||arr[i]>mid){ // checking that studentcount must be less than no, of students provided 
        // and arr element must be less than mid 
        // if condition provided satisfies then returning false 
        return false;
      }
      pagesum = arr[i]; // this pagesum is for student 2.
    }
   
  } 
   return true; // if we reach here it means all the statement is true;
}
int bookallocate(int arr[],int n,int m ){
  int s =0;
  int sum = 0;
  int ans =-1; 
  for(int i =0;i<n;i++){
    sum+=arr[i];
  }
  int e = sum; // taking search space upto sum of pages i.e sum of arr elements 
  int mid= s+(e-s)/2;
  while(s<=e){
    if(ispossible(arr,n,m,mid)){ // if function return true it means it is possible solution then 
        // all the values greater than this will be also the solution but we want the minimised solution 
      ans =mid; // storing the value in answer 
      e=mid-1;// for mimimum solution goingi  left part
    }
    else{
      s=mid+1;// if it returns false then then all the values left to this will not also be the solution
      // so going in theright part 
    }
    mid= s+(e-s)/2;
    
  }
return ans; // returning the final answer for student 1
}





int main(){
int book[4] = {10,20,30,40};
cout<<bookallocate(book,4,2);


}