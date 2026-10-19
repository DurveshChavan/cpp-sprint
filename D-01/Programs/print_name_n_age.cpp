#include <iostream>
#include <string>

int main ()

{
  // value-initialization of variables
  std::string name {};
  int age {};

  // prompting user for their Name and age. and charactor inputing in those variables
  std::cout << "Enter Your Name: ";
  std::cin >> name;

  std::cout << "Enter Your Age: ";
  std::cin >> age;

  // using variable to print a line with them.
  std::cout << "Hello, " << name << ". " << age << " years old fella.\n";

  return 0;

}