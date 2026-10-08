#include<iostream>
using namespace std ;
int main()
{
    int n; // taking the integer input 
  cin>>n;
  int i =1; //initialising i 
  
  
  while(i<=n){
    int j =1; // initialising j such that it starts from 1 all time the loop starts
    while(j<=n){
        cout<<j; // printing j
        j++;  // increasing j
    }
    cout<<endl; // using the next line for pattern required
    i++;
  
   
  }



return 0;
}

// 12
// 12 this type of pattern we want for n=2 