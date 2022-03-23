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
};

int main()
{
  Cylinder cylinder;
  cout << cylinder.volume() << endl;
  return 0;
}
