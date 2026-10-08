#include<iostream>
#include<array> // to make STL array included library

using namespace std;

int main(){
    int basic[3] = { 1,2,3};
    //creating a STL array of int datatype and size 4 and name a  
    array<int,4>a = {1,2,3,4};// implemented from basic array 
    // finding size of array 
    int size = a.size ();
    // printing array and checking if size found is correct or not 
for( int i =0 ;i< size; i++ )
cout<<a[i];
//using at operation to find the element at second inde or any index 
cout<<"element at second index "<< a.at(2)<<endl;
// using empty operation to check if the array is empty or not 
cout<<"empty if 1 or not if 0"<<a.empty()<<endl;
// using front operation to find first element of array 
cout<<"first element "<<a.front()<<endl;
//using back operation to find out the last element of array 
cout<<"last element "<<a.back()<<endl;
return 0;
}