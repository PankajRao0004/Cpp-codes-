#include<iostream>
using namespace std;
#include<map>
int main(){
    //creating a map of keys of int datatypes and values of string datatype of name pm
    map<int,string>pm;
    //providing the elements of the map 
pm[19] = "pankaj";
pm[25] = "mohit";
pm[45] = "sunita";
//inserting element using insert function 
pm.insert({52,"Hawa Singh"});
//printing map 

for(auto i :pm){
    cout<<i.first<<""<<i.second<<endl;
}
//finding reference of 45
auto it = pm.find(45);
// printing all the next elements from it 
for(auto i = it;i!=pm.end();i++){
    cout<<(*i).first<<" "<<(*i).second<<endl;
}
    return 0 ;
}
