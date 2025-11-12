#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here

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
