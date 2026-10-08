#include<iostream>
using namespace std ;
int main()
{
   int n ;
   cin >> n;
int i =1;
int k = 65; // we took the ASCII value of character as input in a variable

   while(i<=n){
int j =1;
while(j<=n){
    cout << char(k)<<" "; // we put  that variable in the datatype char and found the corresponding 
    j++;                    // character 
}
cout<<endl;
i++;
k++; // we increased the value of the variable  so that we can obtain next character 
   }

return 0;   // we cpuld do this without using variable by storing the value of 
            // 'A'+i-1 in any  character variable and printing that character.
}

// we want this type of pattern
//A A A 
//B B B 
//C C C 