#include<iostream>
using namespace std ;
int main()
{
    int n;
  cin>>n;
  int i =1;
  
  
  while(i<=n){
   int j =1;
    
    while(j<=i){ // the most impoertant thing in this pattern is this that loop will go to only i
     
        cout<<"*"<<" "; // all remaining things are same like as integer pattern 
        j++;
      
    }
    cout<<endl;
    i++;
  
   
  }



return 0;
}
