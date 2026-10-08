#include<iostream>
#include <cstring> //#include <cstring> is used to access C-style string and memory manipulation functions such as strlen, strcpy, strcmp, and memset.
using namespace std ; 
class hero{
  int age ;
 
  public :
// when we define this constructor then default constructor is not called 
   // this is same to default constructor if we delete this and then write hero salman then it will give error if we have descirbed any parameterised constructor
   // we created a pointer name 
   
   char*name ;
     
hero(){// user defined constructor  --> shallow copy 
    cout<< " simple constructor called"<<endl ; 
     name = new char[100] ;
  }

  // parameterised constructor 
  hero(int p){ // we defined variable as p for our conveneice to understand the age
    cout<<"addres of current object is :" << this<<endl ; 
    this->age = p ;  // here this->age means age of  curent object
    // to check if age added successfully or not 
    //cout<<this->age<<endl ; 
  }

//copy constructor -> defined by overselves
//here we have to pass by reference because  in pass by value copy is created for copy, copy constructor is called 
//so it will remain in infinite loop, to fix this we pass by refernce 

//  hero( hero &local ){ // here our basic goal is to copy the contents of local hero into current hero for which we are calling 
//   // local is an object of which we will copy attributes
//   // here we create a new char array  of length equal to name of local
//   char *ch = new char[strlen(local.name+1)]; //+1 is  to  adjust null character 
//   strcpy(ch , local.name); // ch k andar local hero ka  name copy kr liya 
//   this->name = ch ; // fir current object ka name update kr diya ch se

//   cout<<"copyconstructor called "<<endl ;
//     this->age = local.age;
//     this->category = local.category; 
//   }

  int films; 
  char category ;

// getter for age 
  int getage(){
     return age ; 
  }

  // setter  for age -> here we set attribute age  to a specific value 
   int setage(int d ){
    age = d ; 
   }

// setter for name 
   void setName(char name[100]){
    strcpy(this->name, name);
   }

// print function 
   void print(){
    cout<<" name:"<<name<<endl;
    cout<<"age:"<<this->age<<endl;
    // cout<<"no. of films:"<<films<<endl;
    cout<<"category: "<<this->category<<endl ;
    cout<< endl ; 
   }

// destructor 
   ~hero(){
    cout<< " destructor called  : "<<endl ; 
   }

   // static keyword 
   static string industry ; 

   // static function 
   static string  random(){ 
    return industry;
   }
};

string hero ::industry = "bollywood";

int main(){
  // object of class hero defined using static alloation in memory 
//hero salman; // when we just write this line then it means that something like salman.hero() is called 

 //hero salman(60);  // if we pass here parameter  also then it calls to parameterised constructor
 // so address is same in this and for this keyword 
 //cout<<" address" <<&salman<<endl; //  
 //cout<<salman.getage()<<endl; 

// as age is here private attribute by default so to access age here we need getter and setter functions  
 // cout<< " salman khan age is : "<< salman.age<<endl;
  // here we get the age of hero 
//  cout<<" salman khan age is : "<< salman.getage()<<endl; 
// cout<< " no. of films salman khan has done are: "<< salman.films<<endl; 
// cout<< " salman khan category is : "<< salman.category<<endl; 

// // if we want to set the age to specific 
// salman.setage(60);               
// salman.category = 'A';
// salman.films = 420; 
// cout<<" salman khan age is : "<< salman.getage()<<endl;
// cout<< " no. of films salman khan has done are: "<< salman.films<<endl; 
// cout<< " salman khan category is : "<< salman.category<<endl;  
  
// // if we want to define dynamically
//  hero* amir = new hero ;
//  amir->setage(65) ;
//  (*amir).category = 'B'; 
//   cout<<" age is "<< (*amir).getage()<<endl; 
//   cout<<"category is" <<(*amir).category<<endl ; 
//    // these are the same representation for a dynamically represented object 
//   cout<< " age is : "<< amir->getage()<<endl ; 
//   cout<<" category is : "<< amir->category<< endl; 

// so the role is mainly for character array others intger , character will not be changed in both  cases 
//Shallow and deep copy differ only when an object contains pointers to dynamically allocated memory.
// Primitive types and fixed arrays are copied by value, but pointers like char* require deep copying to avoid shared memory issues.

// copy constructor -> default in class 
// hero h1; // here we are not passing parameter so simple constructor called  
// char name[7] = "salman";
// h1.setName(name);
// h1.setage(60);
// h1.category = 'A';     // shallow copy -> wer comment our copy constructor 
// h1.print();

// hero h2(h1);
// h2.print();
// cout<< "after changement in hero h1 "<<endl ; 
// h1.name[0] = 'B';
// h1.category= 'V';
// h1.setage(65);

// h1.print();
// h2.print();
 
// deep copy --> we expicitly generate array 


// hero h1; // here  we have not commented our copy constructor so it will be called  
// char name[7] = "salman";
// h1.setName(name);
// h1.setage(60);
// h1.category = 'A';     // 
// cout<< " priniting attributes of h1 : "<< endl; 
// h1.print();

// hero h2(h1);
// cout<< " priniting attributes of h2 : "<< endl; 
// h2.print();
// cout<< "after changement in hero h1 "<<endl ; 
// h1.name[0] = 'B';
// cout<< " priniting attributes of h1 : "<< endl; 
// h1.print();
// cout<< " priniting attributes of h2 : "<< endl; 
// h2.print();

//  // static allocation 
//   hero h1 ;
//    // dynamic allocation 
//   hero*h2 = new hero; 
//   // for h2 destructor to be called manually 
// delete h2 ; 
//   return 0 ; 


// role of static keyword 

// so here we have printed the industry of class hero without knowing the object 

// cout<< hero::industry<<endl ;
// // not recommended 
//  hero a ; // as it is created simple contructor will be called 
//  cout<< a.industry<<endl ; 
//  hero b ; 
//  b.industry = "holywood" ; 

//  cout<<a.industry<<endl ; 
//  cout<<b.industry<<endl ; 



// static functions 
// as random is a function so parenthesis after it are necessary 
 cout<<hero::random()<<endl ;
}

