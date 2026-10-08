#include<iostream> 
#include<math.h>
// Method 1 
using namespace std ;

void uniqel(int arr[],int size){
  int i=0;
// try to initialise the variables locally otherwise they will give values unintentolly 
     while(i<size){
      int count=0;
      for(int j=0;j<size;j++){
        if(arr[j]==arr[i]){
          count++;
        }           // we do not have to write else statement of continue b/c it is unused 
       
      }
      if(count==1){
        cout<<"unique element present in the array having value"<<arr[i]<<endl;
      }
      // here we found the unique element and printed it .
      i++;
     }
     return;
}


int main()
{
    int size;
    cin >> size;
    int arr[size];
    cout<<" provide the eleemnts of array " ;
    for(int i =0;i<size; i++){
      cin>>arr[i];
    }  
      uniqel(arr,size);                                   
   return 0 ;
}
 

// Method 2 
#include<iostream> 
#include<math.h>

using namespace std ;

int uniqel(int arr[],int size ){
  int ans =0;
  for(int i =0;i<size;i++){
    ans = ans^arr[i];// here we hace done xor of every element of array and found the unique element . 
  }
  cout<<"unique element present  in the array having value: "<<ans;
  return ans ;
}
  


int main()
{
    int size;
    cin >> size;
    int arr[size];
    cout<<" provide the eleemnts of array " ;
    for(int i =0;i<size; i++){
      cin>>arr[i];
    }  
      uniqel(arr,size);                                   
   return 0 ;
}
 