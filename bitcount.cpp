#include<iostream> 
#include<math.h>

using namespace std ;
int count=0; // we initialise the count variable globally
int bittest(int n ){  // we made function named one bit
  while(n!=0){  // we made loop such that it checks all the bit 
  int bit = n&1;  // we did  and with one 
  if(bit==1){  
    count++;  // if bit equal to one count increases 
  }
  n=n>>1; // we rightshift the number so that  it checks all bits not same bits 
  }
}
  
  


int main()
{
   int a,b;
   cin>>a>>b;
   bittest(a);
   bittest(b);
cout<<count;

    
                                                      
   return 0 ;
}

// here we want to count total no of 1 bits of the both number  