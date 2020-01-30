//header file contains the class definition, including all data members and
// member functions
#include <iostream>
#include <string>

using namespace std;
//defining the class Pets
class Pets{
//public variables and functions
  public:
    Pets(){
      m_name = "Peter";
      m_age = 10;
      m_type = "Dog";
      m_weight = 15;
      // variables default
    }
    string getName();
    int getAge();
    string getType();
    double getWeight();

    void setName(string name);
    void setAge(int age);
    void setType(string type);
    void setWeight(double weight);

    // private member variables
  private:
    int m_age;
    string m_name;
    string m_type;
    double m_weight;
};
