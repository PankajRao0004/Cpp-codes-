#include<iostream>
using namespace std ;
int main()
{
   int n ;
   cin >> n;
int i =1;

 // printing first pattern of integers
while(i<=n){
  int a=1;
  int k=n-i+1;   // relation to find pattern 
  while(a<=k){
    cout<<a<<" ";
    a++;
  }
  // printing stars 
  int star=2*(i-1);  // important ** to find the relation so 
while(star){   // here we can add> 0 if we want not necessary
  cout<<"*"<<" "; // printing stars

star--;  // important that ** here we have to decrement so that we can process the loop 
           // and we have to decrement by 1 not 2 
}
// printing second  pattern of integers
 int b = n-i+1; 
 while(b>=1)  {
  cout<<b<<" ";
  b--;
 }

   
i++;
 cout<<endl;
}



return 0 ;
}

// we want this type of code :
//1 2 3 4 5 5 4 3 2 1 
//1 2 3 4 * * 4 3 2 1
//1 2 3 * * * * 3 2 1     for n =5
//1 2 * * * * * * 2 1 
//1 * * * * * * * * 1