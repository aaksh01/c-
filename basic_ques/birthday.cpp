#include <iostream>
#include<vector>

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;
    std::vector<int>v;
    for (long int i = 0; i <= n; i++) {
        v.push_back(i);
    }
    for (int i = 2; i <= n; i++) {
        v[i] = (v[i - 1] + v[i - 2]) % 10;
    }
    return v[n];
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
}
