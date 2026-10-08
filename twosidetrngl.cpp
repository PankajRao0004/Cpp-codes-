#include<iostream>
using namespace std ;
int main()
{
   int n ;
   cin >> n;
int i =1;


while(i<=n){
    int space =n-i;   // first printing space 
    while(space){
      cout<<" ";
      space--;
    }
    int k =1;
    while(k<=i){  // priting right triangle
      cout<<k;
      k++;
    } 
    // pritnig last and left triangle 
      int m =i-1;  // we noted that loop starts for i -1
      while(m){ // loop will occur m times
        cout<<m;
        m--;               // we can also use if loop for i >=2 to print last loop
      }
    
   
i++;
 cout<<endl;
}



return 0 ;
}

//required pattern  :
//    1
///  121
//  12321
// 1234321