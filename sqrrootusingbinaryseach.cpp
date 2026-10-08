#include<iostream>

using namespace std;
// we want to find square root of a number using binary search 

// Concept --> Minimising search space .
int squareroot(int n){ // considering that square root of n lies between 1 to n .o.e. search space is between 1 to n .
  int s=0;
  int e = n-1;
  int m = s+(e-s)/2;  // finding mid element 
  int ans = -1; // intitialsing a ans variable 
  while(s<=e){  // condition for loop 
    if((m*m)==n){  // if square of mid is equal to number 
      return m ;  // then returning mid as square rot of that number 
    }
   else  if((m*m)>n){  // if square  of mid is greater than number it means the square root will lie in left part 
      e=m-1;
    }
    else if((m*m)<n){//if square  of mid is less than number it means the square root will lie in right part
ans = m; // storing the mid value in answer for closest integer 
s=m+1;

    }
    m = s+(e-s)/2;  // updating the mid 
  }
return ans;  // returning answer as square root of thr number to nearest integer .
}
// for more precision -> values upto points 
double moreprecision(int n,int precision){   // making function and giving input the number and digits upto which we want precision 
  int intsol = squareroot(n); // storing the integer part from upper function 
    double ans = intsol; //storing the value in answer so that we can update it to more precision 

    double factor =1; // making a variable so that we can add precision 
    for(int i =0; i<precision;i++){ // running the loop no. of times equal to precision.
        factor = factor/10;  // making the factor variable for precision 0.1,0.01,0.001 
        for(double j = ans;(j*j)<n;j+=factor){ // adding factor if square root of j less than n .
                ans = j; // storing the value of j in ans 
        }
    }
   return ans ; // returning answer 
}
// hence we will get the value upto point equal to precision times . 
int main(){
cout<<moreprecision(37,3);
  return 0;
}
//cwe may also not use ans variable in second function if we want .