#include<iostream>

using namespace std ;
// we want to find the gcd of a and b using 
int gcd(int a, int b){
	if(a==0){  //if a  equal to zero means b is greater common divisor  
		return b ;
	}
	if(b==0){ // if b equal to zero means a is greater common divisor 
		return a;
	}
	while(a!=b){ //  until a not equal to b we will subtracting smaller number from larger number because when it 
        // becomes equal to b then we subtract it becomes zero 
		if(a>b){
			a=a-b; // if a is large subtract b 
		}
		else{
		b=b-a;//if b is large subtract a 
		}
	}
	return a; // returned anyh number 
}


int main(){
	
int x , y;
cin>>x>>y;

cout<<gcd(x,y);

	return 0 ;
}
