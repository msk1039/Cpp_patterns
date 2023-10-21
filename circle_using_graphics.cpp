#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int rad,distance;
    cout << "enter a number: " << endl;
    cin >> rad;
    for (int row = 0; row <= 2 * rad; row++) {
        // Use for loop for col wise
        for (int col = 0; col <= 2 * rad; col++) {
            distance = pow(((row - rad) * (row - rad) + (col - rad) * (col - rad)),0.5);

            /**
             * Check whether distance is in the range of (radius - 0.5) and (radius + 0.5)
             * or not to print *
             */
            if (distance > rad - 0.5 && distance<rad + 0.5)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

}