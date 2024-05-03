/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Initialize a variable to store the current odd number
    int numImp = 99;

    // Loop as long as numImp is greater than or equal to 1
    while (numImp >= 1)
    {
        // Print the current odd number
        cout << numImp << endl;

        // Decrement numImp by 2
        numImp -= 2;
    }

    // The program has finished executing, so return 0
    return 0;
}
