#include <iostream>
#include <string>
#include "cylinder.h"
using namespace std;


int main()
{
  Cylinder cylinder;
  cout << "Base Radius" << " " << cylinder.get_base_radius() << endl;
  cylinder.set_base_radius(4.1);
  cout << "Base Radius" << " " << cylinder.get_base_radius() << endl;
  cylinder.set_height(1.2);
  cout << "Volume" << " " << cylinder.volume() << endl;
  return 0;
}
