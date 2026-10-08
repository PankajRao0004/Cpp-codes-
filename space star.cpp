#include<iostream>                              // we refer i = row , j= column 
using namespace std ;
int main()
{
 int n ;
   cin >>n;
   int row =1 ; 
  
   

    while( row<=n){
 // printing space   // it print space 
 int space = n - row ;
      while(space){     // important ** loop wil operate no. of times equal to value of space 
                         // try to coorelate with row / column in this type of pattern 
        cout <<" ";
        space--;
      }
      
    // printing stars
    int col = 1 ;
    
    while(col<=row) {    // after space loop it acts 
      cout<<"*";
      col++;
    }
   
   cout<<endl;
   row++; 
   }
   
  

return 0;
}
 // required pattern :
 //    *
  //  **
 //  ***
 // ****