#include<iostream> 
#include<math.h>

using namespace std ;
int sumarr(int arr[],int size){ // made function to find sum of elements 
  int sum = 0;
  for(int i =0;i<size;i++){
    sum = sum + arr[i];
  }
  cout<<sum;
  return sum;
}

int main()
{
    int size;
    cin >> size; // taking input the size of array 
    int rar[size];
    cout<<" provide the eleemnts of array " ;
    for(int i =0;i<size; i++){
      cin>>rar[i]; // taking input the elements of array 
    }  
    sumarr(rar,size) ;                                        
   return 0 ;
}
// we want output of this type 
//5 
 //provide the eleemnts of array 2 7 1 -4 11
 //17