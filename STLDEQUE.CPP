#include<iostream>
#include<deque> // to use  STL deque included library

using namespace std;

int main(){
    //creating a deque of name p 
    deque<int>p;
    //adding element 2 at last 
    p.push_back(2);
    //adding element 4 at the start
    p.push_front(4);
    //prinitng deque 
    for(int i :p){
        cout<<i<< " ";
    } cout<<endl;
    //erasing te first element 
    p.erase(p.begin(),p.begin()+1);

    //prinitng deque after erasing
    for(int i :p){
        cout<<i<< " ";
    } cout<<endl;
    return 0;
}