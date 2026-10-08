#include<iostream>
#include<vector> // to use  STL vector included library

using namespace std;

int main(){
    //creating a vector p
    vector<int>p;
    // creating a anothervector b of size 4 and initializing all the elements by 2 
    vector<int>b(4,2);
    //creating a copy of vector b of name first 
vector<int>first(b);
// to print any vector letsdo for vector first
cout<<"printing vector first"<<endl;
for(int i :first){
    cout<<i<<" ";
}
cout<<endl;
//to find capacity(space assigned to vector )
cout<<"printing capacity of vector p"<<p.capacity();
//Adding element to the last of vector 
p.push_back(1); // 1 added 
p.push_back(2); // 2 added after 1 
p.push_back(3);// 3 added after2
cout<<"printing capacity of vector p"<<p.capacity();
//Here  capacity double every time when element no . exceed than size so here capacity is 4 

p.pop_back();//reoving elements from last 
// we can also use at ,front ,&back operation like array 
p.clear(); // emptying the vector

//NOte - here capacity not zero size zero 
    return 0;
}