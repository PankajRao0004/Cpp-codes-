#include<iostream>

using namespace std;
#include<set>
int main(){
    //creating a set of name pr
    set<int>pr;
    //using insert function providing the elements to the set 
    pr.insert(1);
    pr.insert(12);
    pr.insert(7);
    pr.insert(9);
    // printing set
    for(auto i:pr){
        cout<<i<<" ";
       
    }cout<<endl;
//creating an iterator it 
    set<int>::iterator it = pr.begin(); // intializing it with first element 
it++ ; // points to the second iterator 

// removing element with second index 
pr.erase(it); // 7 removed
//printing again the set 
for(auto i:pr){
        cout<<i<<" ";
       
    }cout<<endl;

    // using count function to check the element 9 present or not 
    cout<<"7 is present or not: "<<pr.count(9)<<endl;

    // using find function to find the element referrence 
    //creating an iterator itr  to  find the referrence 9means element frem it ot next all 
    set<int>::iterator itr  = pr.find(9) ;
for(auto it = itr;it!=pr.end();it++){
    cout<<*it<<" ";
}cout<<endl;
    return 0 ;
}