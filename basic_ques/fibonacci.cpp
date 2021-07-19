#include <iostream>
#include <cassert>
#include<vector>

long long fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

long long fibonacci_fast(int n) {
    // write your code here
   std::vector<int>v;
    for (long long i = 0; i <= n; i++) {
        v.push_back(i);
    }
    for (long long i = 2; i <= n; i++) {
        v[i] = v[i - 1] + v[i - 2];
    }

   return v[n];
}

void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}

int main() {
    int n = 0;
    std::cin >> n;
    test_solution();
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
