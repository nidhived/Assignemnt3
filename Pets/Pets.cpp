//header file has default varibales , lay out all getter n setting, then privatr @ bottom


// the cpp file, which contains member functions defintions,
//it includes the header file

#include <iostream>
#include "Pets.h"
#include <string>

using namespace std;
// acessors
string Pets :: getName(){
  return m_name;
}

int Pets :: getAge(){
  return m_age;
}

string Pets :: getType(){
  return m_type;
}

double Pets :: getWeight(){
  return m_weight;
}
//modifiers
void Pets :: setName(string name){
  m_name = name;
}

void Pets :: setAge(int age){
  m_age = age;
}

void Pets :: setType(string type){
  m_type = type;
}

void Pets :: setWeight(double weight){
  m_weight = weight;
}
