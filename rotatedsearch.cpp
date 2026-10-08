#include<iostream> 
#include<math.h>

using namespace std ;

 // first make program to find pivot index:index of the  element having the least value 
int getpivot(int arr[],int n){
  int e = n-1;
            //initialising the variables of starting and ending index
int s =0;

  
  int m = s+(e-s)/2;  // finding mid 
  while(s<e){
if(arr[m]>=arr[0]){  // condition for first line (7 to 9 )
  s = m +1; // increasing the si o mid +1 so that we can move forward to find pivot index
}
else{
e=m; // if not in first line then in second line we put e =m bc mid element may be at the left edge of second line 
}
 m = s+(e-s)/2;  // updating the mid part 

}


return s ;  // returning s or e give same output 
} // this cpde same of binary seach with minor changes : 
int binarysearch(int arr[],int si,int ei,int key){ // here we ware also providing starting and ending index
              // bec we have to seach part wise the required target i.e . t 

int mid = si+ (ei-si)/2;



  while(si<=ei){  
  if(arr[mid]==key){   // mid element of array equal to key 
   
    return mid; // returning the mid element 
  }
   if (key>arr[mid]){
    si=mid+1;  // choosing the right  part 
  }
  if (key<arr[mid]){
    ei = mid -1;  // choosing the left part 
  }
  
 // mid= (si+ei)/2; // updating the mid part because si or ei is updated
   // same here also 
   mid = si+ (ei-si)/2;
   
   }
  return -1 ; // if key not present 
}

int sidecheck(int arr[],int n,int t){
  int p = getpivot(arr,n);  // storingthe pivot index in p 
  if(arr[p]<=t&&t<=arr[n-1]){ // if target lies in b/w pivot and n-1 i.e second line then 
    cout<<binarysearch(arr,p,n-1,t);// binary seach in second part pf array 
    
  }
  else{
    cout<<binarysearch(arr,0,p,t); // binary search in first part of array 
   
  }
}
int main()
{
   int even[4] = {3,4,5,1}  ; 
   int odd[5] = {7,9,1 ,2 ,3} ;
    
  
   sidecheck(odd,5,9);  // calling side check function 
   
   
    
   return 0 ;
}
 