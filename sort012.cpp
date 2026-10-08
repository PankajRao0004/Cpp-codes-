#include<iostream> 
#include<math.h>

using namespace std ;          // we have done this sorting using two pointer approach and we took help of chatgpt

void intel(int arr[],int n ){
  int i=0;
  int j = n-1;
  while(i<j){
    if(arr[i]==0&&i<j){
      i++;
    }
    else if(arr[j]==2&&i<j){
      j--;
    }
    else if(arr[i]==2&&arr[j]==0&&i<j){
      swap(arr[i],arr[j]);
      i++;
      j--;
    }
    else if(arr[i]==1&&arr[j]==0&&i<j){
      swap(arr[i],arr[j]);
      i++;
      j--;

    }
    else if(arr[i]==2&&arr[j]==1&&i<j){
      swap(arr[i],arr[j]);
      i++;
        j--;
      }
      else if (arr[i] == 1 && arr[j] == 2) {
        // Do nothing here, because 1 is in middle already and 2 is also okay at end
        j--;
    }
    else if (arr[i] == 1 && arr[j] == 1) {
        // Safe to move i forward
        i++;
    }
      else {
        i++;
        j--;
      }
    }
  for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main()
{
    int size;
    cin >> size;
    int arr[size];
    
    cout<<" provide the elements of array " ;
    for(int i =0;i<size; i++){
      cin>>arr[i];
    }  
    
      intel(arr,size);                                   
   return 0 ;
}
 