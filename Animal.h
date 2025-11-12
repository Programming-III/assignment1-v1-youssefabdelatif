#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define animal class here 
class animal{
 protected:
  string name;
  int age;
  bool isHungry;
  
  public:
  animal(string n,int a,bool isH){

  name =n;
  age=a;
  isHungry=isH;
  }
  void display(){
    cout << name>>;
    cout <<age>>;
    cout <<isHungry>>;
    
  }
  void feed(){
    if(isHungry==true){
      cout << "feed animal" <<;
    }
    else{
      cout <<"animal is fed"<<;
    }
  }
  
}


#endif
