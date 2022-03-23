#include <iostream>
#include <string>
using namespace std;

const double PI = 3.14159265359;

class Cylinder
{
private:
  // Member Variables
  double base_radius{2.6};
  double height{7.1};

public:
  // Constructors
  Cylinder() = default;

  Cylinder(double rad_param, double height_param)
  {
    base_radius = rad_param;
    height = height_param;
  }
  // Function or Methods
  double volume()
  {
    return PI * base_radius * base_radius * height;
  }

  // Setter and getter methods
  double get_base_radius()
  {
    return base_radius;
  }

  double get_height()
  {
    return height;
  }

  void set_base_radius(double rad_param)
  {
    base_radius = rad_param;
  }

  void set_height(double height_param)
  {
    height = height_param;
  }
};

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
