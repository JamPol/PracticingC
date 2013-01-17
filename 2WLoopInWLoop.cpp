/* While loop within a while loop */

#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    
    while ( x < 10 ) {
          while ( x < 5 ) {
              cout<< x * 3 <<endl;
              x++;
          }
          cout<< x <<endl;
          x++;
    }
    cin.get();
}
