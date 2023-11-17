#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

//use long long in case of a big number
long long MaxPairwiseProduct(const vector<int> &numbers) {
    long n = numbers.size();
    if (n < 2) {
        return 0;
    }

    //return the product of the last two numbers from the vector, the largest product
    return numbers.at(n-1) * (long long)numbers.at(n-2);
}

int main() {
    //receive n from user and make a vector of that size
    int n;
    cin >> n;
    vector<int> numbers(n);

    //fill vector 'numbers' with user inputs
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    //sort numbers
    sort(numbers.begin(), numbers.end());

    cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
