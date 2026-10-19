#include <iostream>

int main()
{
  // initialize celsius and fahrenheit variable
  double celsius {};
  double fahrenheit {};

  // Enter the celsius temperature
  std::cout << "Enter the tempurature in Celsius: ";
  std::cin >> celsius;
  
  // convert celsius to fahrenheit and store in fahrenheit variable
  fahrenheit = ((celsius * (9.0/5.0)) + 32);
  
  // print both celsius and fahrenheit temperature
  std::cout << "Temprature in Celsius: " << celsius << '\n' << "Temprature in Fahrenheit: " << fahrenheit << '\n';
  
  return 0;
}