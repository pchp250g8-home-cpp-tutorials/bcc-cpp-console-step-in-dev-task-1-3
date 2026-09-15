#include <iostream>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
   unsigned int n; // Number of seconds elapsed since midnight
   /*Inputting variable values ​​from the keyboard*/
   std::cout << "Enter the number of seconds elapsed since midnight: ";
   std::cin >> n; // Inputting the variable
   unsigned int h = n / 3600; // Number of full hours
   unsigned int m = (n / 60) % 60; // Number of remaining full minutes
   unsigned int s = n % 60; // Number of remaining seconds
   // --Displaying information on the screen--
   std::cout << "Number of full hours since midnight: " << h << "\r\n";
   std::cout << "Number of remaining full minutes since midnight: "
   			 << m << "\r\n";
    std::cout << "Number of remaining seconds since midnight: " << s << "\r\n";
    // -- Pausing screen output until the "Enter" key is pressed
    std::cin.ignore(); // Clear input buffer
    std::cin.get(); // Read a symbol from the keyboard
    return 0; // Exiting the program (function)
}
