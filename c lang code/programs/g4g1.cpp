#include <bits/stdc++.h>
using namespace std;

int ally(long long int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        string digits = to_string(i); // Convert the identification code to string
        sort(digits.begin(), digits.end()); // Sort the digits in ascending order
        if (stoi(digits) == i) { // If the sorted digits form the smallest possible permutation
            count++;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        cout << ally(n) << endl;
    }
    return 0;
}
