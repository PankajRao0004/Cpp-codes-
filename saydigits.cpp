#include<iostream>
using namespace std;
// here we want to call the digits according to the number mentioned 
void saydigit(int n,string arr[]){ // we passed tne number and the array which stores their pronounciation 
  if(n==0){
    return ; // if base case reached then returned 
  }
  int digit = n%10;  // finding digit 
  n=n/10;// updating the number 
  saydigit(n,arr); // caling recursively for the number left after digit 
   //recursion

   cout<<arr[digit]<<"  "; // printing the digit after base case reached so that we can get the number printed right not reversed 

}

int main(){ 
int n ; 
cin>>n ;
string arr[10] = { // created a string array which stores the  pronounciation  of digits 
   "zero","one","two","three","four","five","six","seven","eight","nine"
};

saydigit(n,arr);



    return 0 ;

}  

// same way approach usnig two functions 

/*#include<iostream> 
#include<vector>
using namespace std ;
void breakdigiits(int n , vector<int> &ans){
  if(n==0) return ;
  breakdigiits(n/10,ans);
  ans.push_back(n%10); each step completed accoreding to function calll 
}
void calldigits(vector<int>digits,string arr[]){
  int n = digits.size();
  for(int i =0 ;i<n;i++){
    cout<<arr[digits[i]]<<" ";
  }
  cout<<endl;

}
int main(){
  

int n ; 
cin>>n;  // number input le liya 

vector<int>digits ; 
breakdigiits(n,digits);

string arr[10] = {
   "zero","one","two","three","four","five","six","seven","eight","nine"
};
calldigits(digits,arr);







  return 0 ;
}*/

