#include <iostream>
// #include <string>

int main()
{
  // string name;
	int age {};
  
	std::cout << "Enter your name: ";
	// std::cin >> name >> std::endl;

	std::cout << "Enter your age: ";
	std::cin >> age;

	std::cout << age << "\n"; 

	// std::cout << "Your Name is " << name << " and your age is " << age << "." << std::endl;

	return 0;

}
/*
5 forms of initializer in c++

1. int a;         // default-initialization (no initializer)

// Traditional initialization forms:
2. int b = 5;     // copy-initialization (initial value after equals sign)
3. int c ( 6 );   // direct-initialization (initial value in parenthesis)

// Modern initialization forms (preferred):
4. int d { 7 };   // direct-list-initialization (initial value in braces)
5. int e {};      // value-initialization (empty braces)
6. int height = { 6 }; // copy-list-initialization of initial value 6 into variable height (rarely used)
*/

/*
## For advanced readers

The C++ I/O library does not provide a way to accept keyboard input without the user having to press enter. If this is something you desire, you’ll have to use a third party library. For console applications, we’d recommend pdcurses, FXTUI, cpp-terminal, or notcurses. Many graphical user interface libraries have their own functions to do this kind of thing.
*/