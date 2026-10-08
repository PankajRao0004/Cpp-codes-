#include<iostream> 
#include<math.h>

using namespace std ;
int revarr(int arr[],int size){
  for(int i = 0;i<(size/2);i++){  // here remember that it will go to size/2 ** 
                          // here we can also use another approach of start ,end
    // int c;
    // c=arr[i];
    // arr[i] = arr[size-i-1];       
    // arr[size-i-1] = c;}    
    swap(arr[i],arr[size-i-1]);}  // we can use swap function directly or upper commented method 
  for(int i =0;i<size; i++){
   cout <<arr[i];    // printing the array 
  }

}

int main()
{
    int size;
    cin >> size;
    int rar[size];
    cout<<" provide the eleemnts of array " ;
    for(int i =0;i<size; i++){
      cin>>rar[i];
    }  
    revarr(rar,size) ;                                        
   return 0 ;
}
 