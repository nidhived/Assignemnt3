//nidhi vedantam
//2328859
// vedantam@chapman.edu
// cpsc298 sec 01
// assignement 3
// this program creates 3 separate files for the Pets class

#include <iostream>
#include <string>
#include "Pets.h"

using namespace std;
// main function that implements that creates an object for Pets and then uses
// the accessors and modifiers to call information from the pets class
int main(int argc, char **argv){
  //creating an object
  Pets p1;
  Pets p2;
// calling the default values
  cout << "Name " << p1.getName()<<endl;
  cout << "Age " << p1.getAge() << endl;
  cout << "Type " << p1.getType() << endl;
  cout << "Weight " << p1.getWeight() << endl;

//creating new values
  string name = "petto";
  int age = 33;
  string type = "doggo";
  double weight = 4.0;
//calling the functions with the new values
  p2.setName(name);
  p2.setAge(age);
  p2.setType(type);
  p2.setWeight(weight);
// outputting what the user entered
  cout << "Name: " << p2.getName() << endl;
  cout << "Age: " << p2.getAge() << endl;
  cout << "Type: " << p2.getType() << endl;
  cout << "Weight: " << p2.getWeight() << endl;
}
