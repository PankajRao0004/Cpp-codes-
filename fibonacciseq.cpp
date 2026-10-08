#include<iostream> 
#include<math.h>

using namespace std ;
int fib(int n ){  // made function to claculate fibonacci 
  if(n==1){
    return 0;  // we describe some initial values of seq
  }
  if(n==2){   // you can make while loop also to ensure n>=3;
    return 1;
  }
   return fib(n-1)+ fib(n-2); // here we describe the formula of finding terms recursively
   //*** */ remember that  if we print result here then hat will be efficient and printed multiple times 
   // in recursive calls , 

}

int main()
{
   
    int a ;
    cin>>a;
    fib(a);   // called fib function
    cout<<fib(a);  // printed the reutrn statement k
                                                      
   return 0 ;
}