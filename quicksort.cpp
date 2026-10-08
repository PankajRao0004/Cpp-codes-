#include<iostream>
#include<algorithm>
using namespace std;
int getpartition(int arr[] , int s ,int e ){
    int pivot = arr[s] ; 
// if we consider first element as pivot element 
//alogrithm of quick sort is simple 
// all the elements smaller or r=equal to pivot element must be in left side and all element greater than pivot must be in right side 
    int i =0  ;  // this will choose element which are greter than pivot 
     int j = e ;  // this will choose eleent which are smaller than pivot 
     while(i<j){ // until we can make a partition 
        do(i++) ; // we keep on increasing theindex i 
        while(arr[i]<=pivot) ; // until we get element largwe thna pivot in left side of partition of wihch we are thinking to make  

        do(j--) ;  // we krrp on decreasing j 
        while(arr[j]>pivot) ;  // until we get element smaller than pivot 

        if(i<j){ // if there exist a partition 
            swap(arr[i] ,arr[j]) ;    // thne swap so that small elemetn than pivot come in left and large come in right
     }
    
}
 swap(arr[s],arr[j]) ;  // when  loop completed  take the pivot to its correct position 
 return j ;  // return the partititon index 

}
void quicksort(int arr[],int s , int e ){
  if(s>=e){
    return ; 
  }
  // partition krlo 
  int p = getpartition(arr,s,e);
  // left part ko sort krlo 
  quicksort(arr,s,p-1); // we will include this as it will act as 
  // right part ko sort krlo ; 
  quicksort(arr,p+1,e);

}



int main(){
 int arr1[8] = {2 ,5 ,4 ,3 ,6, 1, 8, 7};
 
 quicksort(arr1, 0,8) ; 
 
 for(int i=0 ;i<8;i++){
    cout<<arr1[i]<<" " ; 
 }

    return 0 ;
}

// #include<iostream>
// #include<algorithm>
// using namespace std ; 
// // quck  sorting 
// int getpartittion(int arr[],int s , int e  ){
//   int pivot = arr[e];
//     int i = s - 1;

//     for (int j = s; j < e; j++) {
//         if (arr[j] <= pivot) {  // if all elemets are smaller than pivot then i and j swap same element and if we 
//           // get any element greater then i stopped there and swap when the condition again satisfies of less than 
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[e]);
//     return i + 1;
//   // // by our method 
//   // int count = 0;
//   // int pivot = arr[e]; // last element ko uske right pace pr pahuchayenge 
//   //  for(int i =s ; i<e;i++){
//   //   if(arr[i]<= arr[e])
//   //   count++;
//   //  }
//   //  int ci = s+count ;
//   //  swap(arr[e],arr[ci]);
//   //  int i =s; 
//   //  int j = e;
//   //  while(i<ci && j>ci) {
//   //   if(arr[i]<=arr[ci]){
//   //     ci++;
//   //   }
//   //   else if(arr[j]>arr[ci]){
//   //     j--;
//   //   }
//   //   else{
//   //     swap(arr[i++],arr[j--]);
//   //   }
//   //  }
//   //  return ci ; 
// }
// void quicksort(int arr[],int s , int e ){
//   if(s>=e){
//     return ; 
//   }
//   // partition krlo 
//   int p = getpartittion(arr,s,e);
//   // left part ko sort krlo 
//   quicksort(arr,s,p-1);
//   // right part ko sort krlo ; 
//   quicksort(arr,p+1,e);

// }


  
//  int main(){ 
//   int arr[5] = {
//  3,12,9,6,7
//   };

//  quicksort(arr,0,4);  

//   // printing the sorted array using merge sort 
//   for(int i =0 ; i<5;i++){
//     cout<<arr[i]<<" ";
//   }



   

// return 0 ; 

//  }