#include<iostream>
using namespace std ; 
// we want to find a raise to power b using recursion 
int getpower(int a, int b){
  int ans = 0 ; //variable to store the final answer  
   if(b==0)// bsse case 
     return 1; 
  if(b==1) return a;// base case 
  // recursive calll to function with b half of previous 
  ans = getpower(a,b/2);
  if(b%2==0){ // if b is ever then simply the return square of answer becuase we are finding answer till b/2 th power 
      return ans *ans ;
  }
  else // if b is odd the nextra a to be multiplied with the square of answer 
  return ans *ans *a;
}
 int main(){
int ans =1 ;
  int a , b;
  cin>>a >>b;
  cout<<getpower(a,b);
   return 0 ;
}
