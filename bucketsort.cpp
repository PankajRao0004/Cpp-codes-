 // seee mainv function 
 #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



void bucketsort(float arr[], int n){
  // step 1 created bucket
  vector<vector<float>>bucket(n ,vector<float>()); // so we creae n buckets which can be maximum filled 
  // 2 put att the element s in the bucket by finding integer index 
  // now we have to find range in order to find range we need ot get minelemtand max elmeent present in the array 
      
  float maxele = arr[0] ; // we initialised maxelement and minelement with starting element 
  float minele = arr[0] ; 

  for(int i =1 ;i<n ;i++){
    maxele = max(maxele, arr[i]) ; //  
    minele = min(minele,arr[i]) ;   
  }
  float range  = (maxele-minele)/n;  // range it gives actually the indexes are in which rnage distribution 

  for(int i =0 ;i<n ;i++){

    int index = (arr[i]-minele)/range;// element multiplid bty size and we are taking integer so it uses floor opeartion and find integer index b/w 0 to 6
    // here we can have one case when our element is maximum element then our index will become equal to the sixze of array then in that case 
    // we will access index equa lt osize which is inaccessible // so we put a condititon here for boundary elements 
    // we find differencd 
    int diff = (arr[i]-minele)/range - index ; 
    if(diff ==0 && arr[i]!=minele){ //this means it is surely an boundary element i.e max element 
      bucket[index-1] .push_back(arr[i]) ; 

    }
    else{
    bucket[index].push_back(arr[i]) ; 
    }
  }
  // step 3 sort the bucket individually 
  for(int i=0 ; i<n ;i++){
    if(!bucket[i].empty()){
    sort(bucket[i].begin() , bucket[i].end()) ;
    }
  }
  //step 4 combine the elements 
  int k =0 ; 
  for(int i =0 ;i<n ;i++){
    for(int j =0 ;j<bucket[i].size();j++){
      arr[k++] = bucket[i][j] ; 
    }
  }

}



int main(){
 // now 2nd case if elements not in the range of 0-1 bbut greater thna 1 also 
 float arr1[] = {0.31,2.84,1.65,9.13,4.45,6.99,5.19};

 //
 
 bucketsort(arr1,7) ; 
 
 for(int i=0 ;i<7;i++){
    cout<<arr1[i]<<" " ; 
 }

    return 0 ;
}






// #include<iostream>
// #include<vector>

// #include<algorithm>
// using namespace std;

// void bucketsort(float arr[], int n){
//   // step 1 created bucket
//   vector<vector<float>>bucket(n ,vector<float>()); // we created vector of vectors 
//   // 2 put at the element s in the bucket by finding integer index 
//   for(int i =0 ;i<n ;i++){
// // size is multiplid so that we cna classify these in the some range b/w 0 to n in terms of integer 
//     int index = arr[i]* n ;// element multiplid bty size and we are taking integer so it uses floor opeartion and find integer index b/w 0 to 6
//     bucket[index].push_back(arr[i]) ; 
//   }
//   // step 3 sort the bucket individually 
//   for(int i=0 ; i<n ;i++){
//     if(!bucket[i].empty()){ // bucket khali h to sort mt karo 
//     sort(bucket[i].begin() , bucket[i].end()) ; // 
//     }
//   }
//   //step 4 combine the elements 
//   int k =0 ; // this is used to put the elements sorted back into the array 
//   for(int i =0 ;i<n ;i++){  // for the index of first outside vector 
//     // inside each vector there is also a vector which we traverse through j 
//     for(int j =0 ;j<bucket[i].size();j++){ 
//       arr[k++] = bucket[i][j] ;  // starting form the fitst bucket completing individually the putting in the array all buckets are individually sorted then there will be no problem 
//     }
//   }

// }



// int main(){
//   // taking first all the elements in the range 0 to 1 
//  float arr1[] = {0.31,0.84,0.65,0.13,0.45,0.99,0.19};

//  //
 
//  bucketsort(arr1,7) ; 
 
//  for(int i=0 ;i<7;i++){
//     cout<<arr1[i]<<" " ; 
//  }

//     return 0 ;
// }