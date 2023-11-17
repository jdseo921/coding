#include <iostream>
using namespace std;

//less efficient as faster algorithm avoids large numbers by frequently using %
int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int get_fibonacci_last_digit_fast(int n) {
    //first fibonacci number is 1
    if (n <= 1) {
        return n;
    }

    //initial sum and fibonacci numbers
    long long sum = 0;
    long long first = 0;
    long long second = 1;
  
    //last digit is all that matters here so no need to keep big numbers
    for (int i = 0; i < n - 1; ++i) {
        sum = first + second % 10;
        first = second % 10;
        second = sum % 10;
    }

    return sum % 10;
}

int main() {
    int n;
    std::cin >> n;
    long long c = get_fibonacci_last_digit_fast(n);
    std::cout << c << '\n';
}
