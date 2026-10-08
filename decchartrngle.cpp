#include<iostream>                              // we refer i = row , j= column 
using namespace std ;
int main()
{
 int n ;
   cin >>n;
   int i =1;
 
char k ='D'; // here we started from D 
   while(i<=n){
    int j=1;
while(j<=i){
    
    char k = 'D'-i+j; // we find the  relation to get the required pattern .
    cout <<k<<" ";
j++;

  }   // 2nd method: starting from A and find the relation for first char of each row and 
  cout<<endl;
i++;          // increment by one always to get the next char of that row 
             // Relation : 'A' +n-i. ** important 
   }

return 0;
}
 // Required pattern 
//D 
//C D 
//B C D
//A B C D