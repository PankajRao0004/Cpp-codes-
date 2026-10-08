//https://www.spoj.com/problems/EKO/ 
// here basically we want to find maximum height  cut at alltrees so that we can get atleast
// total of h metre of height
//concept--> search space minimisation
#include<iostream>
#include<algorithm> // to use sort function 
using namespace std;
bool ispossible(int arr[],int n,int h,int mid){
  int heightsum=0; // initialising a variable which check for height required and height found
  for(int i=0;i<n;i++){
    if(arr[i]>=mid){ // means if the height of ith tree is greater than  mid 
      int m = arr[i]-mid; // then we can cut the tree from height at mid
      heightsum+=m;//adding cutted height ti heght sum
    }
    

  }
  if(heightsum>=h){ //if the colleccted height if of "atleast " h metre 
      return true;
    }
    else {// if not 
      return false;
    }
  
}
int spojcheck(int arr[],int n,int h ){
  int s = arr[0];
  

  int e = arr[n-1];
  int mid = s+(e-s)/2;
  int ans = -1;
  while(s<=e){
    if(ispossible(arr,n,h,mid)){
     ans = mid; // storing the answer and going for the next possible highest answer 
     s= mid+1;
    }
    else {
      e=mid -1;// if mid is so large that andy element do not satisfy it 
    }
    mid = s+(e-s)/2; // uodating mid 

  }
  return ans ; // returning answer 
}

  
int main(){
int n,h ; 

cout<<"enter the number of trees"<<endl;
cin>>n;
int spoj[n];
cout<<"enter the height you want ot cutoff from all the trees"<<endl;
cin>>h;
cout<<"enter the height of each tree"<<endl;
for(int i =0;i<n;i++){
  cin >>spoj[i];
}
sort(spoj,spoj+n); 

cout<<spojcheck(spoj,n,h);


  return 0 ;
}

