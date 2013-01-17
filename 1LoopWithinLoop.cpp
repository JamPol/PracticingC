/* Creating a loop within a loop */

#include <iostream>

using namespace std;

int main()
{
    for ( int x = 0; x < 15; x++) {
        for ( int y = 0; y < 15; y++ ) {
            cout<< y <<endl;
            }
        cout<< x <<endl;
        }
    cin.get();
}
    
