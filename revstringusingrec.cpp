// just here we want ot reverse the string using recursion 
#include<iostream>
using namespace std ;  
string getrev(string str,int s , int e){
  if(s>e){ // base case 
    return str; // as soon as we reached to based case we returned the updated string 
  }
    // char ch = str[s]; // normally swap operation 
    // str[s]=str[e];
    // str[e] = ch ;
     swap(str[s],str[e]);
    
   return  getrev(str,++s,--e);// sp returning the updaed string is very necessary 
}
 int main(){
string s = "abcde"; 
    int e = s.size()-1; // 
cout<<getrev(s,0,e)<<" ";
   return 0 ;
}
