#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here
class reptile:public animal{
  protected:
  bool isVen;
  
  public:
  reptile(string n,int a,bool isH,bool isV){
  name =n;
  age=a;
  isHungry=isH;
  isVen=isV;
  }
}







#endif
