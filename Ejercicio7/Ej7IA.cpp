/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/



#include <iostream>
using namespace std;

int main() {
    int array1[10], array2[10], array3[10], size;

    cout << "Enter the size of the arrays: ";
    cin >> size;

    // Check if the size is valid
    if (size > 10) {
        cout << "Size should be less than or equal to 10." << endl;
        return 1;
    }

    // Input the first array
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < size; i++) {
        cin >> array1[i];
    }

    // Input the second array
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < size; i++) {
        cin >> array2[i];
    }

    // Calculate the sum of the arrays
    for (int i = 0; i < size; i++) {
        array3[i] = array1[i] + array2[i];
    }

    // Print the sum array
    cout << "The sum of the arrays is: ";
    for (int i = 0; i < size; i++) {
        cout << array3[i] << " ";
    }
    cout << endl;

    return 0;
}


