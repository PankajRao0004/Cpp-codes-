
#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout<<"enter the value of n "; 
     // asking for the number upto which we want sequence 
    cin>>n; 
  int a =0;  // defining the first element of fibonacci sequence
  int b =1; // defining second element 
  cout<<a<<" "<<b<<" "; // printing them 
  for(int i =1;i<=n;i++){  // using for loop to print thr numbers
    int sum=a+b;  
    cout<<sum<<" ";
    a=b;// **** most important that we swapped the numbers to get the fibonaccisequence
    b=sum;  // we swapped in rght way so that a can get value of b beforeb get the value of sum
  }

  
    return 0;
}

//0 1 1 2 3 5 8 13 21 34 55 89