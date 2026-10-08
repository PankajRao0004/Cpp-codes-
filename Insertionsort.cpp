// here we will sort the elements as :
// we  consider the first element to be sorted then check for the next number if number is less then shifted 
//  if not it means sorted come out of loop 
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i =0;i<n;i++){
    cin>>arr[i];
  }
  int i=1;  // initializing a variable for the round number
  while(i<n){ // there will be n-1 rounds 

    // j is alway in the backside of i 

    int j =i-1; // we will compare the next element with the previous elements so loop in the backward direction  
    int temp = arr[i]; // storing the value of ith element or ith round
    while(j>=0){ // condition for bakward loop 
     if(temp<arr[j]){ // if number is small 
      arr[j+1]=arr[j]; // it is shifted ** it is not swapping because here we have just updated the value of arr[j+1]
     }    // Pankaj Rao ko kh rha h akad me kse bol rha h
     else{// when we go in else loop we have come at the index before we want replacing the number 
      break;
     }
     j--;
    }
    arr[j+1] = temp;// so we are here also updating arr[j+1]
     // beacuse we have also compared to the lower number then we go to else part and             out  
    i++;

  }
  for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0 ;
}

