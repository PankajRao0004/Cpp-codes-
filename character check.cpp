#include<iostream>
using namespace std ;
int main()
{
   // basically we want to check the character tupe 
   char ch;
   cin >>ch;
   
   if(ch>='a'&& ch<='z')
   cout<<"lower case" <<endl;
  
   
   else if(ch>='A'&& ch<='Z')
   cout<<"uppercase" <<endl;
   else if(ch>='0'&&ch<='9')
cout<<"numeric"<<endl;
return 0 ;
   }
  
   




