#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;
#include<map>
int main(){
    //creating a vecor of name v 
    vector<int >v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);
    // binary search 6 

    cout<<binary_search(v.begin(),v.end(),6)<<endl;
 // reversing a string  of name p 
 string p = "abcd";
 reverse(p.begin(),p.end());

 // rotating a vector by one number 
 rotate(v.begin(),v.begin()+1,v.end());


    return 0 ;
}