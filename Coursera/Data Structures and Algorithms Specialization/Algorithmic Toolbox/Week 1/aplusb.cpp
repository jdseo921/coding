#include <iostream>

int two_digits(int digit1, int digit2) {
    //returns sum of digit1 and digit2
    return digit1 + digit2;
}

int main() {
    int a = 0;
    int b = 0;
  
    //receive inputs for a and b
    std::cin >> a;
    std::cin >> b;
  
    //print outputs of a and b's sum
    std::cout << two_digits(a, b);
    return 0;
}
