#include<iostream> 
#include<math.h>

using namespace std ;
// we want to print all the elements that repeated twice 
void dupel(int nums[],int n ){

  int res[n];
  int a = 0;
  for (int i = 0; i<n; i++) {
   
    for(int j =(i+1);j<n;j++){
        if(nums[j]==nums[i]){
          res[a]=nums[i];
         
             
                 a++;
                 break;
        }
    }
   
}
for(int i =0;i<a;i++){
   cout<<res[i]<<" ";
}

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
      dupel(arr,size);                                   
   return 0 ;
}
 