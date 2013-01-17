/* Prints "Hello World" for amount user inputs */

#include <iostream>

using namespace std;

main()
{
   int x;

   cout<<"Enter a # for amount of times 'Hello World!' will be displayed: ";
   cin>> x;
   cin.ignore();
   
   do {
      cout<<"Hello, world!\n";
      x = x - 1;
   } while ( x != 0 );
   cin.get();
}
