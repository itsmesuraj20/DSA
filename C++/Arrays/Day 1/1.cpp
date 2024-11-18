#include <bits/stdc++.h>
using namespace std;

void recursionFunc(int n) {
    // Base case: stop recursion when n is less than 0
    if (n < 0) {
        cout << "end" << endl;
        return;
    }

    // Print the current value of n
    cout << n << endl;

    // Recursive calls
    recursionFunc(n - 1); // Decrement by 1
    recursionFunc(n - 2); // Decrement by 2
}

int main() {
    int n = 5;
    recursionFunc(n);
    return 0;
}
