#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
    int n ;
    cin>>n;    // took the number input of wich you want complement 
    int m=n ;  // creating a new variable  having same value 
   
   if(n==0)   // taking the base case that  n eqaul tozero 
   return 1;
    
    int mask = 0 ; // creating  a new variable having value zero ; 
    
    
    while(m!=0) {   
        mask = (mask<<1)|1;  //we left shift mask it gets value zero and then we did or with 1 
                             // so that every times we get 1 . here we will get a mask 
                             // having same value 1 in all times when the loop runs .
        m= m>>1;  // we right shift the m s o that it reaches near  to base case   
    }
    int answer = (~n)&mask; //  we take and of not n with mask so that we can get answer 

   cout<<answer;
       
    
   
   
}

// we want complement of number using  the binary form in decimal form .
// for 5 - 101 complement 010  corresponds to 2 