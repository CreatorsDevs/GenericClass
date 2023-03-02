#include <iostream>
using namespace std;

template <class T>
class SpecialAbility{
private:
  T attackStrength;

public:
  T PerformSpecialAbility(){
    return attackStrength;
  }

  void SetAttackStrength(T x){
    attackStrength = x;
  }
};

int main() {
  int n1;
  float n2;
  
  SpecialAbility<int>  obj1;
  SpecialAbility<float> obj2;

  cout << "Set the int attack strength: ";
  cin>> n1;
  obj1.SetAttackStrength(n1);

  cout << "Set the float attack strength: ";
  cin>> n2;
  obj2.SetAttackStrength(n2);

  cout << "Damage received from int attack is: " << obj1.PerformSpecialAbility() << endl;
  
  cout << "Damage received from float attack is: " << obj2.PerformSpecialAbility() << endl;
}