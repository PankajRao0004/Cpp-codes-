#include<iostream>                              // we refer i = row , j= column 
using namespace std ;
int main()
{
 int n ;
   cin >>n;
   int i =1;
 
  char k ='A';  // most important  that we stored the value in a character variable 
   while(i<=n){
    int j=1;
while(j<=i){
    
      
    cout <<k<<" ";
j++;
k++; // by increasing the value of character variable character also gets changed.
  }
  cout<<endl; // second method by  using ASCII vlaues and increasing the value to get character.
i++;
   }

return 0;
}

// we want this type pf pattern : 
//A 
//B C
//D E F
//G H I J