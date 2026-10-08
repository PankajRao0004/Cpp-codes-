#include<iostream>
#include<list>
#include<unordered_map>
// if we want ot make this code generic for any data type not just for int data type 
// thne we can write like as 
//  template <typename t>
// then we replace  int here from all code declaratino and make it T 
using namespace std ;
class graph{
    public: 
//we created a unordered map to implement graph using adjacency list in map we store values in the list corresponding to each vertices 
unordered_map<int,list<int>>adjlist;
// we may also created a 2d array of vector type but there we can store only int data type , here we can store all data type 
void addedge(int u , int v , bool direction){
    // if direction ==0 this means undirected edge 
    // if direction ==1 means directed edge from u to v 

    // create an edge from u to v 
    adjlist[u].push_back(v);
    
    if(direction ==0){
        // this means there is also a edge  from v to u 
        adjlist[v].push_back(u);
    }
}

// now we want to print adjacency list 
// as we know map stored data in key value pairs  
void printadjlist(){
    // then i is poniting to adjacency list 
    for (auto i :adjlist){
        // until we have key value in the map we are printing it 
cout<<i.first<<"->";
// and then corresponding to every key we are printing values stored in the list  
for(auto j :i.second){
    cout<<j<<", "; // values seperated by comma 
}
cout<<endl ;  // then when we mvoe to next key we move to next line 
    }
}
};
int main(){
    // we took input the no. of nodes and edges 
    int n ; 
    cout<<" enter the number of nodes "<<endl ; 
    cin>>n;
    int m ; 
    cout<<"enter the number of edges" <<endl ; 
cin>>m ; 
// then created a graph g 
 graph g ; 


 // we have to write here like as  graph<int>g; if we use generic template 


 // then took input all edges 
for(int i =0 ; i<m ;i++){
    // we took input the nodes between which we have to make nodes 
    int u , v ; 
    cin>> u >>v ;
    // creating an undirected graph 
g.addedge(u,v , 0);
}


g.printadjlist();

    return 0 ; 
}

