#include<iostream>
using namespace std ;
int main()
{
    int n;
  cin>>n;
  int i =1;
  
  
  
  while(i<=n){
   int j =1;
   int k =i; // the key point is that we want to print first ineger in each row equal to i 
            // so we intialise a new variable with value equal to i and print it .
               // second method by not using k is to print i+j-1
    while(j<=i){
     
        cout<< k <<" ";
        j++;
      k++;
    }
    cout<<endl;
    i++;
   
  
   
  }



return 0;
}

// we want this type of pattern 
//1
//2 3 
//3 4 5 
//4 5 6 7