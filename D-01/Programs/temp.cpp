#include <iostream>

int main()
{
  std::cout << "Enter the three numbers: ";

  int x {}, y {}, z {};
  std::cin >> x >> y >> z;

  std::cout << "Entered Number were " << x << ", " << y << " and " << z << ".\n";

  return 0;

}