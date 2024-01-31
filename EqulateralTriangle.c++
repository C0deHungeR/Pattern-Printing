#include <iostream>
using namespace std;

void pattern(int n) {
    for (int i = 1; i <= n; i++) {
        //  to Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        //  to Print '*' 
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int height;
    
    
    cout << "Enter the height of the equilateral triangle: ";
    cin >> height; // taking input for height

   
    pattern(height);

    return 0;
}
