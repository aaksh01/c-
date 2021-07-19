#include <iostream>

#include <iostream>

/*long long gcd_fast(long long a, long long b) {
    return (b != 0) ? gcd_fast(b, a % b) : a;
}*/

long long lcm_fast(long long a, long long b) {
    long long hcf = (b != 0) ? lcm_fast(b, a % b) : a;
    long long product = a * b;
    return product / hcf;
}

int main() {
    long long a, b;
    std::cin >> a >> b;
    std::cout << lcm_fast(a, b) << std::endl;
    return 0;
}
