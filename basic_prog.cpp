#include <iostream>
using namespace std;

void fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    cout << "Fibonacci Sequence: ";
    for (int i = 1; i <= n; i++) {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter number of terms: ";
    cin >> num;

    if(num <= 0) {
        cout << "Please enter a positive number." << endl;
    } else {
        fibonacci(num);
    }

    return 0;
}
