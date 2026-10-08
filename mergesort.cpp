#include<iostream>
using namespace std;

void merge(int arr[],int s , int mid , int e){
    // now we will split array in left and right part 
    // this merge merges ony the sroted arrays 
// remember we are not creating array b as a replacment of arr arr1 we are creating arr b ot store the at macxmimum e-s +1 values 
    int left = s; 
    int right = mid+1 ;  
    int b[e-s+1] ; 
    int mainindex =0 ;  // it is created in every call  so index must start with zero we anre only dilling the sorted values inti it from  the both sorted parts 
    
    //**When using a temporary array for subranges, always index it from 0, not from s. */
    while(left<=mid &&right<=e){ // until we have the elements in both the arrays 
        if(arr[left]<=arr[right]){  // if left part eleemt is small than right then put it in the array b 
            b[mainindex++] = arr[left++] ;  
        }
        else{
            b[mainindex++] = arr[right++] ;  // otherwise put right part element 
        }
    }

        // if left part not completed 
        while(left<=mid){  // if left part all element not merged 
            b[mainindex++] = arr[left++] ; 
        }

       while(right<=e){ // right part nto merged
            b[mainindex++] = arr[right++] ; 
        }
        int k =0 ; // all elements in the array b are stored from starting so used differnet index 
             for(int i =s ; i<=e ;i++){
                arr[i] = b[k++] ; 
             }
}

void mergesort(int arr[],int s , int e){
    if(s<e){
        int mid = (s+e)/2; 
        mergesort(arr,s,mid);  // divide in the left part and sort ,
        mergesort(arr,mid+1,e) ; // divide in the right part and sort 
        merge(arr,s,mid ,e) ;  // then when it becomes sorted then conquer it that is merge 
    }
}
int main(){
 int arr1[8] = {2 ,5 ,4 ,3 ,6, 1, 8, 7};
 
 mergesort(arr1, 0,7) ; 
 
 for(int i=0 ;i<8;i++){
    cout<<arr1[i]<<" " ; 
 }

    return 0 ;
}