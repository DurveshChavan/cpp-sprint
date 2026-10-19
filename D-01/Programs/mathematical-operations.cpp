#include <iostream>

int main()
{
  // initialize 2 variable as int
  int a {}, b {};

  // Take input and store them in variable
  std::cout << "Enter the 1st number: ";
  std::cin >> a;


  std::cout << "Enter the 2nd number: ";
  std::cin >> b;

  // store the answer to add, sub, multi, div respectivly with static_cast<double>
  if (b == 0){
    exit(0);
  }
  int add {a+b}, sub {a-b}, multi {a*b};
  double div {static_cast<double>(a)/b};

  std::cout << "Addition: " << add << '\n';
  std::cout << "Substraction: " << sub << '\n';
  std::cout << "Multiplication: " << multi << '\n';
  std::cout << "Division: " << div << '\n';

  return 0;

}