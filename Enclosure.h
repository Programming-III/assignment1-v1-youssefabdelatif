#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"
class Enclosure{
  protected:
  Animal* animals;
  int CurentCount;
  int capacity;
  
  public:
  Enclosure(Animal* animals,int CurentCount,int capacity){
    Animal* getanimals();
    int getCurrentCount();
    int getcapacity();
  }
  void addAnimal(Animal*animals){
    
    
  }
  void displayAnimals(){
    return animals;
  }
  
  
}


//define enclosure class here 








#endif
