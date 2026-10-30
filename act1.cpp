#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n, n1;
    int count = 0;

    cout << "Give me a number: ";
    cin >> n;

    if (n > 0) {
        cout << n << " is a positive number" << endl;
    }
    else if (n < 0) {
        cout << n << " is a negative number" << endl;
    }
    else {
        cout << n << " is zero" << endl;
    }

    n1 = abs(n);

    if (n1 == 0) {
        count = 1;
    }
    else {
        while (n1 > 0) {
            count++;
            n1 /= 10;
        }
    }

    if (count > 4) {
        cout << "Number exceeds 4 digits." << endl;
        return 0;
    }

    cout << n << " is a " << count << " digit number" << endl;

    return 0;
}

