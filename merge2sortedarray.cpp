#include<iostream>
using namespace std;
// when we have to merge two sorted array in third array 
// Approach - first we go in both the array and check the element s of each and which is less we put it in the third array 
// and then if one array completes then copy the remaining elements of the other array 

// two pointer approach initiaaly i and j at the starting of arrays  k traversing third array 
void merge(int nums1[],int m,int nums2[],int n, int nums3[] ){
  
    int i =0;
    int j =0;
    int k =0;
    // when we are inside the both loops 
    while(i<m&&j<n){
       if(nums1[i]<nums2[j]){
        nums3[k] = nums1[i];
        k++;
        i++;
       }
       else{
nums3[k] = nums2[j];
k++;
j++;
       }
    }
    // it executes if first array elements are not filled completely 
    while(i<m){
        nums3[k] = nums1[i];
        k++;
        i++;
    }
    // if second array element remains 
       while(j<n) {
        nums3[k] = nums2[j];
        k++;
        j++;
       }
    
    
    for(int i =0;i<(m+n);i++){
        cout<<nums3[i]<<" ";

    }

}
int main(){
int arr1[6] = {1,2,3 ,7,9,11};
int arr2[3] = {2,5,6};

int arr3[9];
merge(arr1,6,arr2,3,arr3);

    return 0 ;
}